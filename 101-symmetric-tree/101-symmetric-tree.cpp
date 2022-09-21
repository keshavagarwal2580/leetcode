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
    
    
    bool symmetric(TreeNode * root1, TreeNode *root2){
        
        
        if(root1==NULL || root2==NULL) return root1==root2;
        
        if(root1->val!=root2->val) return false;
       bool node1= symmetric(root1->left,root2->right);
    bool node2=symmetric(root1->right,root2->left);
        return node1&&node2;
        
    }
    
    
    bool isSymmetric(TreeNode* root) {
     return  symmetric(root->left,root->right); 
    }
};