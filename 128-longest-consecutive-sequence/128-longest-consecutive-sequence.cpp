class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=1,ans=INT_MIN;
        if(nums.size()==0) return 0;
        
        // for(int i=0;i<nums.size();i++){
        //     cout<<nums[i]<<" ";
        // }
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]==nums[i]) continue;
            
            if(nums[i]+1==nums[i+1]){
                count++;
            }
            
            else{
                ans=max(count,ans);
                count=1;
            }
        }
        return max(ans,count);
        
    }
};