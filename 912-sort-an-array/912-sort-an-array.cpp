class Solution {
public:
    void mergeThem(vector<int>&ar,int l1,int r1,int l2,int r2){
         vector<int>a,b;
        for(int i=l1;i<=r1;i++){
            a.push_back(ar[i]);
        }
        for(int j=l2;j<=r2;j++){
            b.push_back(ar[j]);
        }
        int x=0,y=0,i=l1;
        for(;x<a.size()&&y<b.size();i++){
            if(a[x]<b[y]){
                ar[i]=a[x];
                x++;
            }
            else{
                ar[i]=b[y];
                y++;
            }
        }
        for(;x<a.size();i++,x++)
            ar[i]=a[x];
        for(;y<b.size();i++,y++)
            ar[i]=b[y];
    }
    void divid(vector<int>&nums,int l,int r){
        if(l>=r) return ;
        int mid=(l+r)/2;
        divid(nums,l,mid);
        divid(nums,mid+1,r);
        mergeThem(nums,l,mid,mid+1,r);
    }
    vector<int> sortArray(vector<int>& nums) {
        divid(nums,0,nums.size()-1);
        return nums;
    }
};