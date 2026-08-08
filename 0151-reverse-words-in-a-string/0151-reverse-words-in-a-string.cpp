class Solution {
public:
    string reverseWords(string s) {
         //the  sky  is blue 

         string word,res;
         vector<string>ans;int st=0;
          while (!isalnum(s[st])){
            st++;
          }
         for(int i=st; i< s.size();i++){
             if (isalnum(s[i])){
                word+=s[i];
             }else {
                if (isalnum(s[i+1])){
                    ans.push_back(word);
                    word="";
                }
             }

         }
         if (   ans.empty() || ans.back()!= word ) ans.push_back(word);
            reverse(ans.begin(),ans.end());
            cout<<word<<endl;

                for(int i=0 ;i<ans.size()-1;i++){
                    res+=ans[i]+" ";
                }
            
return res+ans.back();
     }
};