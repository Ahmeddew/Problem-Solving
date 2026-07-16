class Solution {
public:
    int numRescueBoats(vector<int>& p, int lm) {
        sort(p.begin(),p.end());
        int ans=0,l=0,r=p.size()-1;
        while(l<=r)
        {
            if((p[l]+p[r])<=lm) { l++;r--;ans++; }
            else { r--;ans++; }
        }
        return ans;
    }
};