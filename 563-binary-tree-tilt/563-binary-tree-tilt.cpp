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
    int k=0;
    int ans(TreeNode * root){
        if(!root) return 0;
        int l=ans(root->left);
        int r=ans(root->right);
        int temp=root->val+l+r;
        root->val=abs(l-r);
        k+=root->val;
        return temp;
    }
    int findTilt(TreeNode* root) {  
        ans(root);
        return k;
    }
};