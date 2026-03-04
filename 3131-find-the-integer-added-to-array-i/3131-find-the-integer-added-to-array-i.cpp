class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int max1 = std::numeric_limits<int>::min();
        int max2 = std::numeric_limits<int>::min();

        unsigned const long n = nums1.size();

        for (int i = 0; i < n; ++i){
            max1 = std::max(max1, nums1[i]);
            max2 = std::max(max2, nums2[i]);
        }
        
        return max2 - max1;
    }
};