class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=INT_MAX;
        int maxPr=0;
        for(int i=0;i<prices.size();i++){
            if(minPrice>prices[i])
            {
                minPrice=prices[i];
            }
            
        maxPr=max(maxPr,prices[i]-minPrice);
        }
        return maxPr;
    }
};