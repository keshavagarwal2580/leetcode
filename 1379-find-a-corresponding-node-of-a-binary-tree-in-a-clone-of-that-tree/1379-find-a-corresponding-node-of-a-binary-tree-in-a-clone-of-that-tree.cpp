/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    
    TreeNode * treetrans(TreeNode* root,TreeNode* target){
        if(!root) return NULL;
        if(target->val==root->val) return root;
        TreeNode * l=treetrans(root->left,target);
        TreeNode * r=treetrans(root->right,target);
        if(l) return l;
        return r;
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        return treetrans(cloned,target);
    }
};