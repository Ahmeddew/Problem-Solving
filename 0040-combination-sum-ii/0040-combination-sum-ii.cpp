class Solution {
public:
void solve (vector<int>&arr,int target,int st,vector<int>&curr,int sum,vector<vector<int>>&ans ){

        // base case
        if (sum == target){
            ans.push_back(curr);
            return ;
        }
        
      for (int i = st; i < arr.size(); ++i) {
         if (i > st && arr[i] == arr[i - 1])
              continue;
               sum+=arr[i];
              if (sum<=target){
                  curr.push_back(arr[i]);
                  solve(arr,target,i+1,curr,sum,ans);
                  curr.pop_back();

              }

                 sum -= arr[i];   // undo
          }

  }
    vector<vector<int>> combinationSum2(vector<int>& c, int target) {
          vector<vector<int>>ans;
          vector<int>curr;
          sort(c.begin(),c.end());
          solve(c,target,0,curr,0,ans  );
          return ans;

    }
};