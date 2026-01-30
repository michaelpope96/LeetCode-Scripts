class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        std::vector<int> result;
        int repitions = 0;
        for (int i = 0; i < nums.size() / 2; ++i) {
            repitions = nums[2 * i];
            for (int j = 0; j < repitions; ++j) {
                result.push_back(nums[(2*i)+1]);
            }
        }

        return result;
    }
};