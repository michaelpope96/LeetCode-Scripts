class Solution {
public:
    int minOperations(vector<int>& nums) {
        int answer = 0;
        int currMin = std::numeric_limits<int>::max();
        const int n = nums.size();

        for (int i = 1; i < n; ++i) {
            if (nums[i] <= nums[i-1]) {
                answer += ((nums[i-1] - nums[i]) + 1);
                nums[i] = nums[i - 1] + 1;
            }
        }

        return answer;
    }
};