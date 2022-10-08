class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        
        vector<pair<int,int>> v;
        for(int k=0;k<nums.size();k++){
            v.push_back({nums[k],k});
        }
      
        sort(v.begin(),v.end());
        
        while(i<j){
            
            if(v[i].first+v[j].first==target) return {v[i].second,v[j].second};
            
            else if(v[i].first+v[j].first<target) i++;
            
            else j--;
        }
        return {-1,-1};
    }
};