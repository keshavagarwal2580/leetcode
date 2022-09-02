class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        map<char,char> a,b;
        for(int i=0;i<s.size();i++){
            if(a.find(s[i])!=a.end()){
                if(a[s[i]]!=t[i]) return false;
            }
            if(b.find(t[i])!=b.end()){
                if(b[t[i]]!=s[i]) return false;
            }
            a[s[i]]=t[i];
            b[t[i]]=s[i];
        }
        return true;
    }
};