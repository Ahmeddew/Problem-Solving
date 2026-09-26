class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        // find degree 
       map<int,int>freq;
       for(int i :nums)freq[i]++;
       int k=-1;
       for(auto &[_,v] :freq){
        k =max(k,v);
       }

        // find shortest subarray that has a number apear k time  
        map<int,int>mp ;
        int l=0,ans=INT_MAX; 
        for(int r= 0; r<nums.size();r++){
             mp[nums[r]]++;
             while (mp[nums[r]]  == k ){
               ans= min(ans,r-l+1);
               mp[nums[l]]--;
               l++;
             }
        }
        return ans;
    }
};