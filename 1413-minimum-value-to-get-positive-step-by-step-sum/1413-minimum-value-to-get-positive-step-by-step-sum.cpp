class Solution {
public:
    int minStartValue(vector<int>& v) {
        int minVal=0,x=0;
          for (int i = 0; i < v.size(); ++i) {
         x+=v[i];
         minVal = min(x,minVal);
     }
       
     return abs (minVal)+1;
        
    }
};