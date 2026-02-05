class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());

        int n = nums.size();
        double min = std::numeric_limits<double>::max();

        for (int i = 0; i < n / 2; ++i) {
            min = std::min(min, (nums[i] + nums[n - i - 1]) / 2.0);
        }

        return min;
    }
};