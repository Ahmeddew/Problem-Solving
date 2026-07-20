class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& v, int k) {
         int n = v.size(), m = v[0].size();
        vector<vector<int>> ans = v;
        while (k--){
    ans[0][0] = v[n - 1][m - 1];
    for (int i = 0; i < v.size() ; ++i) {
        for (int j = 0; j <v[i].size() ; ++j) {
            if (i == n - 1 && j == m - 1)
                continue;
                if ( j == m-1 ){
                    ans[i+1][0]=v[i][j];
                    continue;
                }
                ans[i][j+1]=v[i][j];

        }
    }
 
        v = ans;
        }
        return ans;
    }
};