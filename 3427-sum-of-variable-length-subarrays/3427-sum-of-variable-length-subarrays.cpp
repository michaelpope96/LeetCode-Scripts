class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int total = 0, n = nums.size();

        for (int i = 0; i < n; ++i) {
            int start = std::max(0, i - nums[i]);
            for (int j = start; j <= i; ++j) {
                total += nums[j];
            }
        }

        return total;
    }
};