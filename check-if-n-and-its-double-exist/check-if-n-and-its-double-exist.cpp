class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n=arr.size(),flag=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && arr[j]==arr[i]*2){
                    flag=1;
                break;
                }
            }
        }
        if(flag==1)
            return true;
        else
        return false;
    }
};