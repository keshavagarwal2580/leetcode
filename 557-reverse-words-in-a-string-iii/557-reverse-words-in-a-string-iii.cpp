class Solution {
public:
    string reverseWords(string s) {
        int start=0,end=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                end++;
            }
            if(s[i]==' '){
                reverse(s.begin()+start,s.begin()+end);
                    start=i+1;
                end=i+1;
            }
        }
        reverse(s.begin()+start,s.begin()+end);
        return s;
    }
};