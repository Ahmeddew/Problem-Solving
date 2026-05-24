class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int>mp ;
        for(int i=0; i< text.size(); i++){
            mp[text[i]]++;
        }
    int ans1=min({mp['a'],mp['b'],mp['n']});
    int ans2=min({mp['l'],mp['o']})/2;
             
      return min(ans1,ans2) == 0 ?0 : min(ans1,ans2);  
       
    }
};