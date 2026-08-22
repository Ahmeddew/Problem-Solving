class Solution {
public:
    int minPartitions(string n) {
          int ans=INT_MIN;
          for(int i=0; i<n.size(); i++){
            int ones = (n[i]-'0');
            ans=max(ans,ones); 
          }
          return ans;

    }
};