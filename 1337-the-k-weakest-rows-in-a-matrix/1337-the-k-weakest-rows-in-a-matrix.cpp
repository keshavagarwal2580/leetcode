class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq; 
        vector<int>ans;
        for(int i=0;i<mat.size();i++){
            for(int j=1;j<mat[0].size();j++){
                mat[i][0]+=mat[i][j];
            }
            pq.push({mat[i][0],i});
        }
        while(k>0){
            k--;
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};