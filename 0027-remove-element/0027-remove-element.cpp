class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
       sort (nums.begin(),nums.end());
      
       int n= nums.size();
       int k=0, j= n-1;
        for (int i = 0; i < n; ++i) {
        k+= (nums[i]==val);
    }
       if (k  == 0)return n ;
       for(int i=0; i<= n-k  ;i++){
        if (nums[i] == val){
            nums[i]= nums[j];
            j--;
        }

       } 
       return n-k; 
    }
};