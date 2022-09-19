class Solution {
public:
    int countDaysTogether(string stA, string endA, string stB, string endB) {
        map <int,int> ar={{1,0},{2,31}, {3,59}, {4,90}, {5,120}, {6,151}, {7,181}, {8,212}, {9,243}, {10,273}, {11,304}, {12,334}, {13,365}};
    int aM=ar[stoi(stA.substr(0,2))]+stoi(stA.substr(3,2)), bM=ar[stoi(stB.substr(0,2))]+stoi(stB.substr(3,2)), cM=ar[stoi(endA.substr(0,2))]+stoi(endA.substr(3,2)), dM=ar[stoi(endB.substr(0,2))]+stoi(endB.substr(3,2));
        int ans=min(cM,dM)-max(aM,bM);
        // cout<<aM<<" "<<bM<<" "<<cM<<" "<<dM<<"\n";
        return ans<0?0:ans+1;
    }
};