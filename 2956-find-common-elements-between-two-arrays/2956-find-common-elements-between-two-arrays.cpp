class Solution {
public:
    std::vector<int> findIntersectionValues(const std::vector<int>& nums1,
                                            const std::vector<int>& nums2) {
        std::vector<int> answer;
        std::set<int> set1;
        std::set<int> set2;

        for (const int num : nums1) {
            set1.insert(num);
        }

        for (const int num : nums2) {
            set2.insert(num);
        }
        int count1 = 0;
        int count2 = 0;
        for (const int num : nums1) {
            if (set2.find(num) != set2.end()) {
                ++count1;
            }
        }

        for (const int num : nums2) {
            if (set1.find(num) != set1.end()) {
                ++count2;
            }
        }

        return {count1, count2};
    }
};