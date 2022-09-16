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
    
    bool res(TreeNode * root,int p){
        
        if(root==NULL) return true;
        if(p!=root->val) return false;
        
        
        return res(root->left,p)&&res(root->right,p);
    }
    
    
    bool isUnivalTree(TreeNode* root) {
        int p=root->val;
        return res(root,p);
    }
};