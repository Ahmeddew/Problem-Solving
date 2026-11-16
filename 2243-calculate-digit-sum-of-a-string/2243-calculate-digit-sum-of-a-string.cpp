class Solution {
public:
 string merge (string s,int k ){
    string next_round = "";
     int sum = 0;
for (int i = 0; i < s.size(); i++) {
    sum += s[i] - '0';  
    if ((i + 1) % k == 0 || i == s.size() - 1) {
        next_round += to_string(sum);
        sum = 0; // Reset sum for the next group
    }
}
return next_round;
 }
    string digitSum(string s, int k) {
         
         string res=s;
         while (res.size()>k){
          res= merge(res,k);
         }
        return res;
    }
};