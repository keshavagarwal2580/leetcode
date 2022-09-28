class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        
        // 1 2 3 4 5 6 7 8 9 10 8
        // sort -> 1 2 3 4 5 6 7 8 8 9 10
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]) return true;
        }
        return false;
        
    }
};