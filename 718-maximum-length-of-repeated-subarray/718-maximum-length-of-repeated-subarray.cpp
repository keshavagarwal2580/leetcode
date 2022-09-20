 class Solution {
public:
    
    // Sliding array approach
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int ans = 0;
        // Starts from -n+1 and goes till m
        for(int i=-n+1;i<m;i++){
            int count = 0;
            for(int j=0;j<n;j++){
                
                if(i+j<0){
                    continue;
                }
                else if(i+j>=m){
                    break;
                }
                else if(nums1[i+j] == nums2[j]){
                    count++;
                    ans = max(ans,count);
                }
                else{
                    count = 0;
                }
            }
        }
        return ans;
    }
};