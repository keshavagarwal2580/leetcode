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
    
    TreeNode* construct(TreeNode *root,vector<int> &nums,int l,int r,unordered_map<int,int> &m){
        if(l>r)  return NULL;
        int x=*max_element(nums.begin()+l,nums.begin()+r+1);
        root->val=x;
        TreeNode* left= new TreeNode();
        TreeNode* right=new TreeNode();
        root->left=construct(left,nums,l,m[x]-1,m);
        root->right=construct(right,nums,m[x]+1,r,m);
        return root;
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        
        
        unordered_map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]=i;
        }
        TreeNode * root=new TreeNode();
        root=construct(root,nums,0,n-1,m);
        return root;
    }
};