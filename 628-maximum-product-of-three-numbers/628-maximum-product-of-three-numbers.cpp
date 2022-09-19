class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<>());
        
//         for(int i=0;i<nums.size();i++)
//             cout<<nums[i];
        
        if(nums[0]<0)   return nums[0]*nums[1]*nums[2];
        
        
        if(nums[nums.size()-1]*nums[nums.size()-2]>nums[1]*nums[2])
        {
           return nums[nums.size()-1]*nums[nums.size()-2]*nums[0];
        }
        
        return nums[0]*nums[1]*nums[2];
        
        
    }
};