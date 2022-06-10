class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int sum=0;
        vector<int> arr;
        int m=nums1.size();
        int n=nums2.size();
        for(int i=0;i<m;i++){
            arr.push_back(nums1[i]);
        }
        for(int i=0;i<n;i++){
            arr.push_back(nums2[i]);
        }
       
        sort(arr.begin(),arr.end());
        if(arr.size()%2!=0){
            return float(arr[(arr.size()/2)]);
        }
        else {
            float ans=(arr[arr.size()/2]+arr[(arr.size()/2)-1]);
            return float(ans)/2;
        }
        }
};