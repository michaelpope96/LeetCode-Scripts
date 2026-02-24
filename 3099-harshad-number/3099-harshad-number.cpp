class Solution {
public:
    int sumOfDigits(const int& y) {
        const std::string s = std::to_string(y);

        int answer = 0;
        const unsigned long n = s.size();
        for (long i = n - 1; i >= 0; --i) {
            answer += (s[i] - '0');
        }

        return answer;
    }

    int sumOfTheDigitsOfHarshadNumber(const int x) {
        const int sum = sumOfDigits(x);
        return x % sum == 0 ? sum : -1;
    }
};