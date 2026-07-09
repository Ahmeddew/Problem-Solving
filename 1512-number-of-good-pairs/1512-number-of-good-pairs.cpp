class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int>mp ;
        for(auto &i :nums ){mp[i]++;}
        int ans=0; 

        for( auto p:mp ){
            
             int k=  (p.second )*(p.second -1) /2   ;
             ans+=k;
        }
        return ans;
    }
};