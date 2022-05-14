class Solution {
public:
    int minDeletions(string s) {
        map<char,int> ans;
        map<int,int> aks;
        int i=0;
        while(s[i]!='\0'){
            ans[s[i]]++;
            i++;
        }
        vector<int> ab;
        for(auto it: ans){
            if(aks.find(it.second)==aks.end())
            {
                aks.insert({it.second,1});
            }
            else{
                ab.push_back(it.second);
            }
        }
        int noOfOp=0;
        for(auto it: ab){
            int b=0;
            b=it;
            while(aks.find(b)!=aks.end() && b!=0){
                b--;
                noOfOp++;
            }
            if(b!=0 && aks.find(b)==aks.end()){ 
                aks.insert({b,1});
            }
        }
        return noOfOp;
    }
};