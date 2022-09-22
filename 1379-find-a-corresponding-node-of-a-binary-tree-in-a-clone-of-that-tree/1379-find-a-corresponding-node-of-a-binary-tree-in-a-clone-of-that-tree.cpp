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
    
    TreeNode* ans=NULL;
    void treetrans(TreeNode* root,TreeNode* target){
        if(!root) return ;
        if(target->val==root->val) ans=root;
        treetrans(root->left,target);
        treetrans(root->right,target);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        treetrans(cloned,target);
        return ans;
    }
};