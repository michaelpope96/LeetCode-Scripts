class Solution {
public:
    int countPairs(const std::vector<int>& nums, const int k) {
        const unsigned long n = nums.size();
        int answer = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (nums[i] == nums[j] && i * j % k == 0) {
                    ++answer;
                }
            }
        }

        return answer;
    }
};