class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
     set<string>st;
      

      for(int i=0; i< emails.size();i++){
         string word=emails[i];
         string ans="";
          bool flag1 =0,flag2=0;
         for(int j =0 ;j<word.size();j++){
             if (!flag1 ){
                 if (word[j] == '.')continue;
                 else if (word[j] == '+'){
                     flag2=1;
                 }
                 else if (word[j] == '@') {
                    ans+=word[j];
                     flag1=1;
                     continue;
                 }
                     else{
                     if (!flag2)ans+=word[j];
                 }
             }else {
                ans+=word[j];
             }

         }
         st.insert(ans);

     }

      return st.size();
    }
};