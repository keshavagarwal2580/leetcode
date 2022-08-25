class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>m;
        for(auto it: magazine){
            m[it]++;
        }
        
        for(int i=0;i<ransomNote.size();i++){
            if(m.find(ransomNote[i])!=m.end()){
                if(m[ransomNote[i]]<1){
                    return false;
                }
                else m[ransomNote[i]]--;
            }
            else return false;
            
        }
            return true;
        
    }
};