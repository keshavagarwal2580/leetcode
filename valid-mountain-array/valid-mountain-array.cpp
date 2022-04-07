class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
       int l=0,h=arr.size()-1,flag=0;
        if(arr.size()<3){
            return false;
        }
        while(l<h){
            if(arr[l]<arr[l+1]){
                l++;
            }
            else if(arr[h]<arr[h-1]){
                h--;
            }
            else
                break;
            if(l==h && l!=arr.size()-1 && h!=0)
                flag=1;
        }
        if(flag==1)
            return true;
        return false;
    }
};