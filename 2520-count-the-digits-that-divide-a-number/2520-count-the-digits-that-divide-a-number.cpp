class Solution {
public:
    int countDigits(int num) {
        int count = 0;

        std::vector<int> digits = extractDigits(num);
        for (int digit : digits) {
            if (num % digit == 0) {
                ++count;
            }
        }

        return count;
    }

    std::vector<int> extractDigits(int num) {
        std::vector<int> digits;

        while (num > 0) {
            digits.push_back(num % 10);
            num /= 10;
        }

        return digits;
    }
};