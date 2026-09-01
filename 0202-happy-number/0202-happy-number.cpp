class Solution {
public:
int sum (int n ){
int  ans=0;
while (n){
    ans+=(n%10)*(n%10);
    n/=10;
}
return ans;
}
    bool isHappy(int n) {
      set<int>vis;
       while (true ){
            n= sum(n);
            if (n ==1) return true;
         if (vis.count(n)){
               return false;
            }
             vis.insert(n);
      } 
      return true;
            
    }
};