class Solution {
public:
    std::vector<int> findMissingElements(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());

        std::vector<int> answer;
        unsigned const long n = nums.size();
        for (int i = 0; i < (n - 1); ++i) {
            if ((nums[i] + 1) != nums[i + 1]) {
                for (int j = nums[i] + 1; j < nums[i + 1]; ++j) {
                    answer.push_back(j);
                }
            }
        }

        return answer;
    }
};