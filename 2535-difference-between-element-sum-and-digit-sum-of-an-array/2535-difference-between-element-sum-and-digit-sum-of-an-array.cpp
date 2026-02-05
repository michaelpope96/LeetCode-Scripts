class Solution {
public:
    int sumDigits(int num) {
        int sum = 0;

        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }

        return sum;
    }

    int differenceOfSum(vector<int>& nums) {
        int elementSum = 0;
        int digitSum = 0;
        for (auto num : nums) {
            elementSum += num;
            digitSum += sumDigits(num);
        }

        return std::abs(elementSum - digitSum);
    }
};