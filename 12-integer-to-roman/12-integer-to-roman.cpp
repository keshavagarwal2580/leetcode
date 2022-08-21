class Solution {
public:
    string intToRoman(int num) {
        int n=num;
        string s="";
        int arr[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string rom[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        
        for(int i=0;n!=0;i++){
            while(n>=arr[i]){
                n=n-arr[i];
        s+=rom[i];
            }
        }
                
        return s;
    }
};