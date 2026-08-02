class TimeMap {
public:
    TimeMap() {

    }
    unordered_map<string, vector<pair<int, string>>> mp;

    void set(string key, string value, int timestamp) {
          mp[key].push_back({ timestamp,value});

    }

    string get(string key, int timestamp) {
         if (!mp.count(key)) return "";
             auto &v = mp[key];
             string ans;
             int l=0,r=v.size()-1,mid;
             while (l<=r){
                mid= (l+r)/2;
                if (v[mid].first <= timestamp){
                    ans= v[mid].second;
                    l=mid+1;
                }else {
                    r=mid-1;
                }
             }

              return ans;
     }
};