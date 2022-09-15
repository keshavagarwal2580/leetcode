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
  
    int ans(TreeNode* root,int &sum){
            if(root==NULL) return 0;
        
        int l=ans(root->left,sum);
        int r=ans(root->right,sum);
        sum+=abs(r-l);
        return root->val+r+l;
    
    
    }
    int findTilt(TreeNode* root) {
        int sum=0;
        ans(root,sum);
        return sum;
    }
};