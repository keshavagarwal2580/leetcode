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
    void trans(TreeNode* root,int level,map<int,vector<int>> &ar){
        if(!root) return;
        ar[level].push_back(root->val);
        trans(root->left,level+1,ar);
        trans(root->right,level+1,ar);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        map<int,vector<int>> ar;
        vector<vector<int>> ans;
        trans(root,0,ar);
        for(auto it: ar){
            ans.push_back(it.second);
        }
        return ans;
    }
};