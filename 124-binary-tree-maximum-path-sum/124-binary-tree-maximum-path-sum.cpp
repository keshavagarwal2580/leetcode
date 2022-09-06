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
    
    int sum(TreeNode* root,int &path){
        if(root==NULL) return 0;
        
        int l=max(0,sum(root->left,path));
        int r=max(0,sum(root->right,path));
        
        path=max(path,l+r+root->val);
        return (root->val+max(l,r));
    }
    
    int maxPathSum(TreeNode* root) {
        int path=INT_MIN;
         sum(root,path);
        return path;
    }
};