class Solution {
public:
    int strStr(string a, string b) {
          string ans="";
         for(int r=0,l=0; r<a.size() ; r++){
              ans+=a[r];
              if (ans ==b )return l;

                while (ans.size()>b.size()){
                    ans.erase(ans.begin());
                    l++;
                    if (ans == b){
                        return l;
                    }
                }


         }
         return -1;
    }
};