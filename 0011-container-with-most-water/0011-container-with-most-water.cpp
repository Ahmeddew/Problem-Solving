class Solution {
public:
    int maxArea(vector<int>& arr) {
        
   int l=0,r=arr.size()-1,area=-1;

    while ( l<r){
        int curr =(r-l)* min(arr[l],arr[r]);
      area=max(area,curr);

         if (arr[l] >arr[r] )r--;
         else l++;
         
    }
    return area;
    }
};