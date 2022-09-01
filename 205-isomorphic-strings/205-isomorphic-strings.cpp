class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> m,m4;
        unordered_map<char,bool> m2,m3;
        if(s.size()!=t.size()) return false;
        for(int i=0;i<s.size();i++){
            if(m2[s[i]]!=1 && m3[t[i]]!=1){
                m[s[i]]=t[i];
                m4[t[i]]=s[i];
                m2[s[i]]=1;
                m3[t[i]]=1;
            }
                  else
                  if(m[s[i]]!=t[i] || m4[t[i]]!=s[i]) return false;
        }
                  return true;
    }
};