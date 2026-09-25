class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        if (nums.size() == 1)return 0;
      int mn= *min_element(nums.begin(),nums.end());
      int mx= *max_element(nums.begin(),nums.end());
      int  ans=INT_MAX;
       vector<int>a;
       vector<int>b;
       for(int i=0 ;i<=k ;i++){
        a.push_back(mn+i);
       }
         for(int i=0 ;i<=k ;i++){
        b.push_back(mx-i);
       }
       for(int i=0; i< b.size();i++){
            int r= b[i];
            for(int j =0; j< a.size() ;j++){
                ans= min(ans,r-a[j]);
                if (ans== 0 )return ans;
            }
       }

         return ans;
    } 
};