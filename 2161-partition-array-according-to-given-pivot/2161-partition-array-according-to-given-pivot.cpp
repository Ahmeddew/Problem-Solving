    class Solution {
    public:
        vector<int> pivotArray(vector<int>& nums, int pivot) {
            int n=nums.size();
            vector<int> less;
            vector<int> equal;
            vector<int> high;
            for(auto i:nums){
                if (i<pivot){
                    less.push_back(i);
                }
                else if (i==pivot){
                    equal.push_back(i);
                }
                else{
                    high.push_back(i);
                }
            }
            less.insert(less.end(),equal.begin(),equal.end());            
            less.insert(less.end(),high.begin(),high.end());   
            return less;         
        }
    };