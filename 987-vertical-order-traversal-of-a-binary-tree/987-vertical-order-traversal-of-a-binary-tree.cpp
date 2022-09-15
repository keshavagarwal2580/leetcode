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
bool myfun(pair<int,int>a,pair<int,int>b){
    if(a.second>b.second) return false;
    if(a.second==b.second){
        if(a.first>b.first) return false;
    }
    return true;
}
class Solution {
public:
    void treeTrav(TreeNode* root,int val,int h,map<int,vector<pair<int,int>>>&ans){
        if(!root) return;
        ans[val].push_back({root->val,h});
        treeTrav(root->left,val-1,h+1,ans);
        treeTrav(root->right,val+1,h+1,ans);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,vector<pair<int,int>>> ans;
        treeTrav(root,0,0,ans);
        vector<vector<int>> res;
        for(auto it: ans){
            vector<int> temp;
            vector<pair<int,int>> a=it.second;
            sort(a.begin(),a.end(),myfun);
            for(auto x:a){
                temp.push_back(x.first);
            }
            res.push_back(temp);
        }
        return res;
    }
};