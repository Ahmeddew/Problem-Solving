class Solution {
public:
 
    int firstStableIndex(vector<int>& nums, int k) {
      
        int mx=INT_MIN;
        int j;
        for(int i=0;i <nums.size();i++){
            mx= max(mx,nums[i]);
             int mn=INT_MAX;
             for( j=i; j<nums.size();j++){
                 mn=min(mn,nums[j]);
             }
             cout<<mx<<' '<<mn<<endl;
             if (mx-mn <=k){
                return i;
             }
             
            
        }
         
         return -1;
    }
};