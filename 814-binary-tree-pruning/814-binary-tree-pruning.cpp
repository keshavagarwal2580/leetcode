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
    
    TreeNode * construct(TreeNode *root){
        if(root==NULL) return root;
        
        root->left=construct(root->left);
        root->right=construct(root->right);
        
        if(root->val==0 && root->left==NULL && root->right==NULL) return NULL;
        
        else return root;
        
    }
    
    TreeNode* pruneTree(TreeNode* root) {
     return   construct(root);
    }
};