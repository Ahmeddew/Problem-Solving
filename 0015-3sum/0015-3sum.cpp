class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        
   set<vector<int>> st;
   int n= arr.size();
    sort(arr.begin(),arr.end());
int j,k;
    for (int i = 0 ;i<n-2 ;i++) {
        j=  i+1,k=n-1;
        while (j<k){
             int sum =arr[i]+arr[j]+arr[k];
             if (sum == 0){
                 vector<int> cur = {arr[i], arr[j],arr[k]};
                 sort(cur.begin(), cur.end());
                 st.insert(cur);
                 j++,k--;
             }else if (sum >0 ){
                 k--;
             }else {
                 j++;
             }
        }

    }

    vector<vector<int>> ans;
    for (auto &t: st) {
        ans.push_back(t);
    }
     return ans;
    }

     
};