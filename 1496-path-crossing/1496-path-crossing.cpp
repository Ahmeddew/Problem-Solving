class Solution {
public:
struct point {
   int  x;
    int y;
    bool operator<(const point& other) const {
        return tie(x, y) < tie(other.x, other.y);
    }
};
    bool isPathCrossing(string s) {
      set<point>st;
      point p{0,0};
      st.insert(p);
    for (int i = 0; i <s.size() ; ++i) {
        
        if (s[i] == 'N')p.y++;
        else if (s[i] == 'S')p.y--;
        else if (s[i] == 'E')p.x++;
        else p.x--;
        if (!st.count(p))
        {
            st.insert(p);
        }else {
            return true;
        }
    }
    return false ;
    }
};