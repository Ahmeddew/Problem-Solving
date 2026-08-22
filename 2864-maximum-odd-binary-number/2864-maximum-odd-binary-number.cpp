class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ones=0;
        for(char c :s){
            if (c == '1')ones++;
        }
        int zeros=s.size()-ones;
         // 11101
        string ans=""; 
        
             for(int i= 0 ;i<ones-1; i++)ans+="1";
             for(int i=0; i<zeros;i++)ans+="0";
             ans+="1";
           
          return ans;
    }
};