class Solution {
public:
    bool canAliceWin(int n) {
        int rem= n-10;int mov=9;
        bool turn=1;
        if (rem< 0 )return false ;
        turn=0; 
        while (true){
          if (rem < mov){
            if (turn == 0 )return true;
            return false;
          } 
          rem-=mov;
          turn =!turn;
          mov--;

        }
                      
         return 0;
        
    }
};