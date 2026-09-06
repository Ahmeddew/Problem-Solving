class Solution {
public:
    int nearestDrone(vector<vector<int>>& c, vector<int>& target) {
        int mn=INT_MAX,idx=-1;
        for(int i=0; i<c.size();i++){
         int dis= abs(c[i][0]-target[0])+abs(c[i][1]-target[1]);
         cout<<dis<<endl;
         if (dis >c[i][2])continue;
         if (dis< mn){
            mn=dis;
            idx=i;
         }
            
        }
        return idx;
    }
};