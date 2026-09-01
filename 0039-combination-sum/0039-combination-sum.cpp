class Solution {
public:
void backtrack(
        vector<int>& c,
        int target,
        int start,
        vector<int>& current,
        vector<vector<int>>& result)
{

      // base case
     if (target == 0 ){
          // complete branch
         result.push_back(current);
         return ;
     }
     if (target<0 ){
       //  invalid branch
     return ;
     }
      // recursion
    for (int i = start; i <c.size() ; ++i) {

        //choose
        if (c[i] > target)
            continue;
        current.push_back(c[i]);
        backtrack(c,target-c[i],i,current,result);
        current.pop_back();
    }
  }

    vector<vector<int>> combinationSum(vector<int>& c, int target) {
          
        int start=0;
        vector<int> current;
        vector<vector<int>> result;
        backtrack(c,target,start,current,result);
        return result;

    }
};