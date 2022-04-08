class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        priority_queue<int> pq;
        vector<int> ans;
        ans.push_back(-1);
        for(int i=arr.size()-1;i>0;i--){
            pq.push(arr[i]);
            ans.push_back(pq.top());
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};