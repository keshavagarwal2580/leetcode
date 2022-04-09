class Solution {
public:
    typedef pair<int,int>  pi;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> ans;
        for(auto it:nums){
            ans[it]++;
        }
        priority_queue<pi,vector<pi>> pq;
        for(auto it: ans){
            pq.push({it.second,it.first});
        }
        vector<int> res;
        while(k--){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};