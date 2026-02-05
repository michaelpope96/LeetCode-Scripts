class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int answer = 0;
        int n = nums.size();

        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (std::abs(nums[i] - nums[j]) == k) {
                    ++answer;
                }
            }
        }

        return answer;
    }
};