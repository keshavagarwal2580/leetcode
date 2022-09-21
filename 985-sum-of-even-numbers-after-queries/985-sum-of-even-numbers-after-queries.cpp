class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& a, vector<vector<int>>& q) {
        int n = a.size();
        int m = q.size();
        int sum = 0;
        vector<int> ans(m,0);
        for(int i=0;i<n;i++)
            if(a[i]%2==0) sum += a[i];
        for(int i=0;i<m;i++){
            int ind = q[i][1];
            if((a[ind]%2)==0) sum -= a[ind];
            a[ind] += q[i][0];
            if((a[ind]%2)==0) sum+=a[ind];
            ans[i] = sum;
        }
        return ans;
    }
};