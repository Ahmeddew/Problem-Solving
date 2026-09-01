class Solution {
public:
     void backtrack( int n,int k,vector<int>&curr ,int start,vector<vector<int>>&ans){

      // base case 
    if (curr.size() == k){
        ans.push_back(curr);
        return ;
    }
      // 
      for (int i= start ;i<=n ;i++){
            // choose 
            curr.push_back(i);
             //recurse 
            backtrack(n,k,curr,i+1,ans);
           // undo 
           curr.pop_back();
      }

     }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>curr;
        int start=1;
         backtrack(n,k,curr,start,ans);
         return ans;
    }
};