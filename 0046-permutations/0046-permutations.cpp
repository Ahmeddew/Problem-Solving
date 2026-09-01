class Solution {
public:


 void backtrack(vector<int>& arr,vector<int>& curr,
 vector<vector<int>>& result,vector<bool>&vis ){
   // base case  
      if (curr.size() == arr.size()){
        result.push_back(curr);
        return;
      }
   
    for(int i=0; i<arr.size();i++){
         //  choose
          if (!vis[i]){
            curr.push_back(arr[i]);
            vis[i]=true;
             // recurse
            backtrack(arr,curr,result,vis);
           // undo 
           curr.pop_back();
           vis[i]=false;
          }  
    }
 }
    vector<vector<int>> permute(vector<int>& arr) {
        vector<int> curr;
       vector<vector<int>>  result;
       vector<bool> vis(arr.size(), false);
     backtrack(arr,curr,result,vis);
     return result;
    }
};