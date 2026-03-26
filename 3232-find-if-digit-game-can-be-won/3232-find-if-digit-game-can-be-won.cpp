class Solution {
public:
    bool canAliceWin(const std::vector<int>& nums) {
        int single = 0;
        int doub = 0;
        const unsigned long n = nums.size();

        for (unsigned long i = 0; i < n; ++i) {
            if (nums[i] / 10 > 0) {
                doub += nums[i];
            } else {
                single += nums[i];
            }
        }

        return single != doub;
    }
};