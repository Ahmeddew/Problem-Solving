class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& v) {
      
      sort (v.begin(),v.end());
      vector<int>ans(v.size()); 
      int n =v.size();
       queue<int> q;
        for (int i = 0; i < n; ++i) {
            q.push(i);
        }
        for(int i =0; i< n;i++){
            ans[q.front()]= v[i];
            q.pop();
            if (!q.empty()){
                q.push(q.front());
                q.pop();
            }

        }
    return ans;
    }
};