class Solution {
public:
    int largestAltitude(vector<int>& gain) {
         int Max=0,x=0;
         for(int i=0; i<gain.size();i++){
           x+=gain[i];
           Max=max(Max,x);
         }
         return Max;

    }
};