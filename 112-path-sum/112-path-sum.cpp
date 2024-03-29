/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool flag=false;
    void f(TreeNode * root,int targetSum,int &sum){
    
        if(root==NULL) return ;
        
        sum+=root->val;
        
        if((sum==targetSum) &&(root->left==NULL) &&(root->right==NULL))
        {
            flag=true;
            return;
        }        
        
        f(root->left,targetSum,sum);
        f(root->right,targetSum,sum);
        sum-=root->val;
    }
    
    
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0;
        
        f(root,targetSum,sum);
        
        return flag;
    }
};