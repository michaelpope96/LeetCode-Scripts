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

    int minElement(const std::vector<int>& nums) {
        int answer = std::numeric_limits<int>::max();;
        for (const int num : nums) {
            answer = std::min(answer, sumDigits(num));
        }

        return answer;
    }
};