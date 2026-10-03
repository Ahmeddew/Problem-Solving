class Solution {
public:
bool valid (vector<int>v){
    if (v.size() ==1 )return false;
    int diff= abs(v[0]-v[1]);
         for(int i = 2;i<v.size();i++){
            if (abs(v[i]-v[i-1])!= diff)return false;
         }
         return true;
}
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        //  
        vector<bool>ans;
        for(int i=0 ;i<l.size();i++){
            vector<int>curr ;
            for(int j= l[i];j<=r[i];j++){
                curr.push_back(nums[j]);
            }
            sort(curr.begin(),curr.end());
              if (valid(curr)){
             ans.push_back(true);
              }else{
                    ans.push_back(false );
              }
            
        }
        return ans;
    }
};