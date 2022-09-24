class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
      vector<int>ans;

        unordered_map<int,set<int>>u;
        for(int i=0;i<logs.size();i++)
        {
            u[logs[i][0]].insert(logs[i][1]);
        }
        int arr[k+1];
       for(auto it=u.begin();it!=u.end();it++)
           cout<<it->first<<" "<<(it->second).size()<<endl;
     for(int i=1;i<=k;i++) arr[i]=0;
        for(auto it=u.begin();it!=u.end();it++)
        {
                  arr[(it->second).size()]++;
        }
        for(int i=1;i<=k;i++)
            ans.push_back(arr[i]);
            
        
        
        return ans;
        
        
    }
};