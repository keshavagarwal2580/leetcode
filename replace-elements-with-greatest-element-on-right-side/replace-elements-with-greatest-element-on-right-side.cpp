class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> v;
        v.push_back(-1);
        int ans=arr[arr.size()-1];
        for(int i=arr.size()-1;i>0;i--){
            ans=max(ans,arr[i]);
            v.push_back(ans);
            
        }
        reverse(v.begin(),v.end());
        return v;
    }
};