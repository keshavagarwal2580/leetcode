class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> copy;
        copy=heights;
        sort(heights.begin(),heights.end());
        int j=0;
        for(int i=0;i<heights.size();i++){
        if(heights[i]!=copy[i])
            j++;
        }
        return j;
    }
};