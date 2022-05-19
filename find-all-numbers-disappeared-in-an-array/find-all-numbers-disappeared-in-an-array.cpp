class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        //int mx=INT_MIN;
        int N=nums.size();
        // for(int i=0;i<nums.size();i++){
        //     mx=max(mx,nums[i]);
        //}
        bool check[N+1];
        vector<int> output;
        for(int i=1;i<=N;i++){
            check[i]=false;
        }
        for(int i=0;i<N;i++){
            check[nums[i]]=true;
        }
        for(int i=1;i<=N;i++){
            if(check[i]==false)
                output.push_back(i);
        }
        return output;
    }
};