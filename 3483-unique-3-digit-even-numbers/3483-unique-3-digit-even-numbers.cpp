class Solution {
public:
void backtrack(vector<int>&digits,string curr,set<int>&st,vector<bool>&vis){
 
     if (curr.size() == 3){
         if (stoi(curr)%2 ==0 )st.insert(stoi(curr));
            
         return;
     }
    //choose
    for (int i = 0; i <digits.size() ; ++i) {
        
         if (vis[i])continue;
         if (curr.empty() && digits[i] == 0)continue;

             vis[i] =true;
             curr.push_back(digits[i]+'0');
             // recurse 
             backtrack(digits,curr,st,vis);
              // undo 
             curr.pop_back();
              vis[i] =false;
           
    }
}
    int totalNumbers(vector<int>& digits) {
     vector<bool>vis(digits.size(),false);
      set<int>st;

   backtrack(digits,"",st,vis);
   return st.size();
    }
};