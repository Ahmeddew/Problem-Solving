class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
    for(auto c: s)  { mp[c]++; };

    int cntOne=0;
    for(auto [c,v] :mp ){
        if (v % 2 == 1)
            cntOne++;
    }

   // s--> even all occ even  cnt = 2, size = 8-cnt +1 ;
    // s-->odd one char odd
    int ans=0;
    if  ( s.size() %2== 0 && cntOne ==0 || s.size() %2!= 0 && cntOne ==1 ){
          ans =s.size();
    }else {
            ans =s.size()-cntOne+1;
    }
    return ans;

    }
};