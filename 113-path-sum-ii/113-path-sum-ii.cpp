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
    void sum(TreeNode *root,int targetSum,vector<vector<int>> &ans,vector<int>& temp,int s){
        if(root==NULL) return;
        
        temp.push_back(root->val);
        s+=root->val;
        if(s==targetSum && (root->left==NULL && root->right==NULL)){
            ans.push_back(temp);
        }
        
        sum(root->left,targetSum,ans,temp,s);
        sum(root->right,targetSum,ans,temp,s);
        temp.pop_back();
        s-=root->val;
        
        return;
        
    
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> temp;
        int s=0;
        sum(root,targetSum,ans,temp,s);
        return ans;
    }
};