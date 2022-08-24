class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int pre=nums[0];
        ans.push_back(pre);
        for(int i=1;i<nums.size();i++)
        {
            pre=pre+nums[i];
            ans.push_back(pre);
        }
        
        return ans;
        
    }
};