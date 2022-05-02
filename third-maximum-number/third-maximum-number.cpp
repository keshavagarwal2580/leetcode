class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        priority_queue<int> pq;
        pq.push(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]!=nums[i]){
                pq.push(nums[i]);
                //cout<<pq.top();
        }
        }
        if(pq.size()>=3){
            //cout<<pq.top();
            pq.pop();
            pq.pop();
            return pq.top();
        }
        else 
            //cout<<pq.top();
            return pq.top();
    }
};