class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char> a,b;
        for(int i=0;i<s.size();i++){
            if(s[i]!='#')
                a.push_back(s[i]);
            
            else if(a.size()>0)
                a.pop_back();
        }
        
        
        for(int i=0;i<t.size();i++){
            if(t[i]!='#')
                b.push_back(t[i]);
            
            else if(b.size()>0)
                b.pop_back();
        }
        for(int i=0;i<a.size();i++)
            cout<<a[i];
        
        cout<<endl;
        for(int i=0;i<b.size();i++)
            cout<<b[i];
        
        
        if(a.size()!=b.size()) return false;
        
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i]) return false;
        }
        return true;
    }
};