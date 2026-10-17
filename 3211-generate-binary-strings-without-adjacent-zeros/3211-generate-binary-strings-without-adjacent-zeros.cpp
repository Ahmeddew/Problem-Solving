class Solution {
public:
vector<string>ans;
 
void backrack(int prev ,int n,string &curr ){ 
    if (curr.size() == n){
        ans.push_back(curr);
        return ;
    }
     // add 1 
      curr.push_back('1');
      backrack(1,n,curr);
      curr.pop_back();
      if (prev == 1){
    curr.push_back('0');
      backrack(0,n,curr);
      curr.pop_back();
      }
      
     // add 0 

}
    vector<string> validStrings(int n) { 
        string a = "0", b = "1";
        ans.clear(); 
        backrack(0,n,a);
         backrack(1,n,b);
        return ans;
    }
};