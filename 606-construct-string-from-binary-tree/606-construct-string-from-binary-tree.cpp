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
    
    string make(TreeNode * root,string &s){
        if(root==NULL) return "";
        
        s+=to_string(root->val);
        
        if(root->left || root->right){
            s+="(";
            make(root->left,s);
            s+=")";
        }
        
        if(root->right){
            s+="(";
            make(root->right,s);
            s+=")";
        }
        
        return s;
    }
    
    
    string tree2str(TreeNode* root) {
        
        string s="";
        
        return make(root,s);
    }
};