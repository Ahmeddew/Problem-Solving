class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int mxinc=0,mxdec=0;
         for(int i =0; i<nums.size();i++){
             // try all increasing
             int inc=0,dec=0;
            for(int j =i+1 ;j<nums.size() ;j++){
                 if (nums[j]> nums[j-1]){
                     inc++;
                 }else{
                    mxinc=max(mxinc,inc);
                    inc=0;
                 }
                 mxinc=max(mxinc,inc);   
            }
             // try all decreasing 
             for(int j=i+1 ;j<nums.size();j++){
              if (nums[j] < nums[j-1]){
                     dec++;
                 }else{
                    mxdec= max(mxdec,dec);
                    dec=0;
                 }   
             }
              mxdec= max(mxdec,dec);
         }
         return max(mxinc+1,mxdec+1);
    }
};