class Solution {
public:
    bool checkIfPangram(string sentence) {
       //sort(sentence.begin(),sentence.end());
        unordered_set<char> s;
        for(int i=0;i<sentence.size();i++){
            s.insert(sentence[i]);
        }
        
        if(s.size()==26) return true;
        else return false;
    }
};