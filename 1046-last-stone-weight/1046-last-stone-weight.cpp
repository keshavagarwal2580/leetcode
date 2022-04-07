class Solution {
public:
    int lastStoneWeight(vector<int>& v) {
        sort(v.begin(),v.end());
        while(v.size()>1){
             int n=v.size()-1;
            int diff=v[n]-v[n-1];
            if(diff==0){
                v.pop_back();
                v.pop_back();
            }
        else{
            v.pop_back();
            v.pop_back();
            v.push_back(diff);
            sort(v.begin(),v.end());
        }
        }
        if(v.size()>0) return v[0];
        return 0;
    }
};