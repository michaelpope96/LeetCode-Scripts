class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int result = 0;
        int size = nums.size();
        for (int i = 0; i < size; ++i) {
            if (setBits(i) == k) {
                result += nums[i];
            }
        }

        return result;
    }

    int setBits(int num) {
        int count = std::bitset<32>(num).count();
        return count;
    }
};