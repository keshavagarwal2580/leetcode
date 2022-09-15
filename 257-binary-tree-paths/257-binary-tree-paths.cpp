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
    void res(string s,vector<string> &ans,TreeNode * root){
        
        if(root==NULL) return ;
        
         s+=to_string(root->val);
        if(root->left==NULL && root->right==NULL) {
            ans.push_back(s);
            return ;
        }
         
        s+="->";
        res(s,ans,root->left);
        res(s,ans,root->right);
        
        
    }
    
    
    
    vector<string> binaryTreePaths(TreeNode* root) {
        string s="";
        vector<string> ans;
        
     res(s,ans,root);
        return ans;
    }
};