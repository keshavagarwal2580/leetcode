class Solution {
public:
    int reverse(int x) {
        long long ans=0;
        
        while(x){
            int temp=x%10;
            x=x/10;
            ans=ans*10+temp;
            cout<<ans<<" ";
        }
        
        if(ans >INT_MAX || ans<INT_MIN){
            return 0;
        }
        else
        return ans;
    }
};