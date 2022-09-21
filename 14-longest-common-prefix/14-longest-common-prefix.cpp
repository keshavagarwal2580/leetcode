class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string s="";
        int minlen=strs[0].size();
        for(int i=0;i<strs.size();i++){
            if(strs[i].size()<minlen)
                minlen=strs[i].size();
        }
        
        
        int j=0;
        
        while(j<minlen){
        for(int i=0;i<strs.size();i++){
            if(strs[0][j]!=strs[i][j])
                return s;
            }
                s+=strs[0][j];
                j++;
                
        }
        
        return s;
    }
};