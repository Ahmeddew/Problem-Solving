class Solution {
public:
    std::vector<int> findIntersectionValues(std::vector<int>& nums1, std::vector<int>& nums2) {
        int answer1 = 0;
        int answer2 = 0;

        for (int x : nums1) {
            if (std::find(nums2.begin(), nums2.end(), x) != nums2.end()) {
                ++answer1;
            }
        }

        for (int x : nums2) {
            if (std::find(nums1.begin(), nums1.end(), x) != nums1.end()) {
                ++answer2;
            }
        }

        return {answer1, answer2};
    }
};