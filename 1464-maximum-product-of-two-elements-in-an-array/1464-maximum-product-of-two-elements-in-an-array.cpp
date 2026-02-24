class Solution {
public:
    int maxProduct(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());

        const unsigned long n = nums.size();
        return (nums[n - 1] - 1) * (nums[n - 2] - 1);
    };
};