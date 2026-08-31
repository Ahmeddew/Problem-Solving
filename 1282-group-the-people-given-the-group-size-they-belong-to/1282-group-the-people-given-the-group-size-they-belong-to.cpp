class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& arr) {
        int n= arr.size();
         vector<vector<int>>ans;
        map<int,vector<int>>mp;
        for(int i=0;i <n;i++){
            mp[arr[i]].push_back(i);
        }
        for(auto p:mp){
            int num=p.second.size();
            vector<int>&t=p.second;
             vector<int>r;
               for(int i=0 ; i<num ;i++){
                        r.push_back(t[i]);
                       if (r.size() == p.first){
                        ans.push_back(r);r.clear();
                       }
               }

        }
        return ans;
    }
};