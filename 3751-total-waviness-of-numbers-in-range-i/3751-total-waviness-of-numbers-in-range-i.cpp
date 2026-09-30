class Solution {
public:
 int cnt(string s ){
    int ans=0;
    for(int i=1; i<s.size()-1;i++){
         if (s[i]>s[i-1] && s[i]>s[i+1] )ans++;
         if (s[i]<s[i-1] && s[i]<s[i+1])ans++;
    }
    return ans;
 }
    int totalWaviness(int num1, int num2) {
        int ans=0;
        for(int i = num1;i<= num2;i++){
              string num=to_string(i);
          ans+=cnt(num);
        }
        return ans;
    }
};