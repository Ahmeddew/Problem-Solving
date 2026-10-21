class Solution {
public:
    int minOperations(int n) {
        int sum=0;
       vector<int>v ;
       for(int i=0;i<n ;i++){
        v.push_back((2*i)+1);
       }
        for(auto &i :v){
            sum+=i;
        }  
     int target =sum/n,ans=0;
     for(int i=0; i<(n/2) ;i++){
       ans+=(target-v[i]);
     }
     return ans;
    }
};