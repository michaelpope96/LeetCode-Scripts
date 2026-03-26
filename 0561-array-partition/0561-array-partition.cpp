class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int answer = 0;

        std::sort(nums.begin(), nums.end());
        unsigned long n = nums.size();
        for (unsigned long i = 1; i < n; i += 2) {
            answer += std::min(nums[i-1], nums[i]);
        }
        
        return answer;
    }
};