class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
          unordered_map<int,int>mp;
           
          int sum=0,ans=0; 
          for(auto i :arr){
            sum +=i;
             ans+=mp[sum-k ];
             if(sum== k) ans++; 
                
             mp[sum]++;

          }
          return ans;
    }
};