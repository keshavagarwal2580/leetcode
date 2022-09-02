class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> ans;
        
        for(int i=0;i<s.size();i++){
            ans[s[i]]++;
        }
        
        int count=0,odd=0;
        for(auto i :ans){
            if(i.second%2==0)
                count+=i.second;
            
            else{
                count+=i.second-1;
                odd++;
            }
            
        }
        if(odd>0)
            count=count+1;
        
        return count;
        
    }
};