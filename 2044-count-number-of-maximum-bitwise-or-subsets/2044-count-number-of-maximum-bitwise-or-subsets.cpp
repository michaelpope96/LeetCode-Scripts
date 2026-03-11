class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int maxVal = 0;
        for (const int& num : nums) {
            maxVal |= num;
        }

        return recurseSubset(nums, 0, 0, maxVal);
    }

    int recurseSubset(vector<int>& nums, int index, int currentVal, int targetVal) {
        if (index == nums.size()) {
            return currentVal == targetVal ? 1 : 0;
        }

        int withoutIndex = recurseSubset(nums, index + 1, currentVal, targetVal);

        return withoutIndex + recurseSubset(nums, index + 1, currentVal | nums[index], targetVal);
    }
};