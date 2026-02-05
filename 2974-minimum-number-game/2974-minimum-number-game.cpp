class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());

        int n = nums.size();
        for (int i = 0; i < n; i += 2) {
            std::swap(nums[i], nums[i + 1]);
        }
        
        return nums;
    }
};