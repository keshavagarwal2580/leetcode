class Solution {
public:
    int maximum69Number (int num) {
        string ans="";
        int count=0;
        string s=to_string(num);
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='6' && count<1)
            {
                s[i]='9';
                count++;
            }
            
        }
        int n=stoi(s);
        return n;
        
        
    }
};