class Solution {
public:
    int maxScore(string s) {
        vector<int>prefix;
     for(int i=0; i<s.size(); i++){
         prefix.push_back((s[i]-'0'));
     }
     for(int i=1 ;i<prefix.size() ;i++){
         prefix[i]+=prefix[i-1];
     }
    int zeros= 0;int MaxScore=0;
     for(int i=0 ;i< (prefix.size())-1; i++){
          int ones=0;
         zeros+= (s[i] =='0');
          ones+= prefix[prefix.size()-1]-prefix[i];
          MaxScore=max(MaxScore,zeros+ones);
     }

      return MaxScore ;
    }
};