class Solution {
public:
    bool isPalindrome(int x) {
        int n=x;
        int rem;
        long y=0;
        while(x>0){
            rem=x%10;
            y=y*10+rem;
            x=x/10;
        }
        if(y==n){
            return true;
        }
        else
            return false;
    }
};