class Solution {
public:
    int calPoints(vector<string>& operations) {
          
          stack<int>st;
          vector<int>v;
          int ans=0;
          for( int i=0; i<operations.size();i++){
               if ( operations[i] =="C" ){
               v.pop_back(); 
              }
              else if (operations[i]== "D"){
                 int d= v.back()*2;
                 v.push_back(d);
              }
              else if (operations[i] =="+"){
                    v.push_back((v[v.size()-1])+(v[v.size()-2]));
              }
              else  {
                     v.push_back(stoi(operations[i]));
              }
          }
            
           for(auto i :v)ans+=i;
           return ans;

    }
};