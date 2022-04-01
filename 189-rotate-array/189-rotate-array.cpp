class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> ans(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            if((i+k)>=nums.size()){
                ans[(i+k)%nums.size()]=nums[i];
            }
            else
                ans[i+k]=nums[i];
        }
        nums=ans;
    }
};