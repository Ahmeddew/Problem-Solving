class Solution {
public:
    int maximumLengthSubstring(string s) {
        int l=0,r=0,ans=0;
        unordered_map<char,int>mp;
        for(r=0 ;r<s.size();r++){
            mp[s[r]]++;
            while (mp[s[r]] >2){
                    mp[s[l]]--;
                    l++;
            }
            ans= max(ans,r-l+1);
            cout<<ans <<" "<<l<<" "<<r<<endl;
        }
        return ans;
    }
};