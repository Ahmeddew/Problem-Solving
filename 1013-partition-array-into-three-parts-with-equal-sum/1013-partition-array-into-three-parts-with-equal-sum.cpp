class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=0;
        for(int i=0 ;i<arr.size();i++){
            sum+=arr[i] ;
        }
        int cnt=0,curr=0; 
         for(int i=0; i<arr.size();i++){
             curr+=arr[i];
             if (curr == sum/3 ){
                cnt++;
                curr=0; 
             }
         }
        return sum%3==0 && cnt>=3;
    }
};