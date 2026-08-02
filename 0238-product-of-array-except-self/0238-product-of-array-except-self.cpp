class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int ProductWithoutZeros= 1,zeros=0;
        for(int i : nums){
            if (i == 0)zeros++;
              else {
                ProductWithoutZeros*=i;
              }
        } 
          vector<int>ans;
        for(int i :nums) {
        if ( !zeros ){
            ans.push_back(ProductWithoutZeros/i);
        }else {
             if (i != 0 ){
                ans.push_back(0);
             }else {
                    ans.push_back(ProductWithoutZeros * (zeros ==1) );
                 }  
                  
        }
        }
        return ans;
    }
};