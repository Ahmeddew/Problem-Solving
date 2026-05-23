class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int val=nums[0],cnt=1;
        map<int,int>mp ;
        for(int i=1; i<nums.size() ;i++){
            if (nums[i] ==val ){
                cnt++; 
            }else{
                mp[val]=cnt;
                cnt=1;
                val=nums[i];
            }
        }
             mp[val]=cnt;
        int mx = INT_MIN,ans=0;
     for(auto &p : mp)
     {
         if (mx < p.second){
             mx= p.second;
             ans=p.first;
         }
     }
     return  ans;

    }
};