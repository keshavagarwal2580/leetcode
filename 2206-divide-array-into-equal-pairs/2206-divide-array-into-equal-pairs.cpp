class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int count=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i+=2){
            if(nums[i]==nums[i+1]){
                count++;
                
            }
            else
                return false;
            //if(nums.size())
            if((nums.size())/2==count)
                return true;
        }
        return false;
    }
};