class Solution {
public:
    bool uniformArray(vector<int>& arr) {
        vector<int>odd,even;
           
           for(int i=0; i<arr.size();i++){
             if (arr[i] %2 == 0 ){
                even.push_back(arr[i]);
                if (i<arr.size()-1)
                odd.push_back(arr[i]-arr[i+1]);
             }else {
                odd.push_back(arr[i]);
                if (i<arr.size()-1)
                even.push_back(arr[i]-arr[i+1]);
             }
           }
            
           return even.size() == arr.size() || odd.size()== arr.size();
    }
};