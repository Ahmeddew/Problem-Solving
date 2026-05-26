class Solution {
public:
    int longestConsecutive(vector<int>& v) {
        if (v.empty())return 0;
         set<int>st;
    for(auto &i :v){st.insert(i);}

  vector<int>ans;

    for(auto i :st) {
        ans.push_back(i);
    }
    int  cnt =1,mx=1;
for( int i=0; i<ans.size();i++) {
     if ( i < ans.size() -1 && ans[i] == ans[i+1]-1 )cnt++ ;
     else {
      mx =max(mx,cnt);
             cnt= 1;
             
     }
}  mx=max(mx,cnt);
return mx ;
    }
};