class Solution {
public:
    typedef pair<int,int> pi;
    int minSetSize(vector<int>& arr) {
        map<int,int> ans;
        for(auto it: arr){
            ans[it]++;
        }
        priority_queue<pi> pq;
        for(auto it: ans){
            pq.push({it.second,it.first});
        }
        int x=0,n=arr.size();
        int i=0;
        while((n-x)>(n/2)){
            x+=pq.top().first;
            pq.pop();
            i++;
        }
        return i;
    }
};