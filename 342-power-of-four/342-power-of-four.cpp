class Solution {
public:
    bool isPowerOfFour(int n) {
        long t=1;
        while(t<n){
            t=t<<2;
        }
        if(t==n)
            return true;
        else return false;
    }
};