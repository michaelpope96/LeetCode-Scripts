class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int pos = 0;
        int leftSum = nums[0];
        int rightSum = 0;
        int n = nums.size();
        int count = 0;

        for (int i = n-1; i >= 1; --i) {
            rightSum += nums[i];
        }

        while (pos < (n - 1)) {
            if ((leftSum - rightSum) % 2 == 0) {
                ++count;
            }
            leftSum += nums[pos+1];
            rightSum -= nums[pos+1];
            ++pos;
        }

        return count;
        
    }
};