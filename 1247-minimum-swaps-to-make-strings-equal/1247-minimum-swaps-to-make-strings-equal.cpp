class Solution {
public:
    int minimumSwap(string s1, string s2) {
         int cntxy=0,cntyx=0;

     for(int i=0; i<s1.size();i++){
        if (s1[i] == 'x' && s2[i] == 'y')cntxy++;
        else if (s1[i] == 'y' && s2[i] == 'x')cntyx++;

     }
     if ((cntxy +cntyx )%2 ==1)return -1;
          
     return cntxy/2 + cntyx/2 + (cntxy % 2) * 2;
    }
};