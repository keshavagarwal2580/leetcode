class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
       int max = 0, mask = 0;
    
    
    for(int i=31; i>=0; i--)
    {
        mask = mask | (1 << i);
        
       unordered_set<int> st;
        
        
        for(auto x: nums)
        {
           st.insert(mask & x);
        }
        
        int temp = max | (1<<i);
        
        for(auto x: st)
        {
            if(st.find(x^temp) != st.end())
            {
                max = temp;
                
                break;
            }
        }
    }
        
    return max;
    
}
};