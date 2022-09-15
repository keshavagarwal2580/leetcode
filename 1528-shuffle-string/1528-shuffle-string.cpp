class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string str="";
        
        int j=0;
        while(j<=s.size()-1){
        for(int i=0;i<s.size();i++){
         if(indices[i]==j)
             str+=s[i];
        }
            j++;
        }
        
        return str;
        
        
    }
};