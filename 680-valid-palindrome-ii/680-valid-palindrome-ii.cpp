class Solution {
public:
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.size()-1;
        int counti = 0;
        
        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else {
                i++;
                counti++;
            }
        }
    int countj = 0;
        i=0;
        j = s.size()-1;
                while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else {
                j--;
                countj++;
            }
        }
        if(counti<=1||countj<=1){
            return true;
        }
        else return false;

    }
};