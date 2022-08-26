class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string str = to_string(n);
      sort(str.begin(), str.end());
        cout<<str;
     
        
     int i=0;
     string ans = "";
        while(true) {
            int val = pow(2,i);
             string temp = to_string(val);
            sort(temp.begin(), temp.end());
            if(temp.length() > str.length()) break;
            
            if(temp == str) return true;
           
            
            i++;
        }
        return false;
        
        
    }
};