class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> nums1,nums2;
        int left=0;
        int right=0;
        for(int i=0;i<nums.size();i++){
            left=left+nums[i];
            nums1.push_back(left);
        }
        
        for(int i=nums.size()-1;i>=0;i--){
            right=right+nums[i];
            nums2.push_back(right);
        }
        
        for(int i=0;i<nums.size();i++){
            if(nums1[i]==nums2[nums.size()-i-1])
                return i;
        }
        return -1;
    }
};