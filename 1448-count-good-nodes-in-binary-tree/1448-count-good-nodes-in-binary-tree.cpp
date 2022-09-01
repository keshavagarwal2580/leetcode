class Solution {
public:
    
    int goodvalues(TreeNode* &root,int max,int &count)
    {
        if(!root)   return 0;
        
        if(max<=root->val)
        {
            count++;
            max=root->val;
        }
        return goodvalues(root->left,max,count)+goodvalues(root->right,max,count);
    }
    
    int goodNodes(TreeNode* root)
    {
        int count=0;
        goodvalues(root,-1e5,count);  
        return count;
    }
};