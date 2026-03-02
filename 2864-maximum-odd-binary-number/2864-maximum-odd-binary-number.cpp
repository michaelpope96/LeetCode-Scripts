class Solution {
public:
    std::string maximumOddBinaryNumber(const std::string& s) {
        int count = 0;

        for (const char c : s) {
            if ('1' == c) {
                ++count;
            }
        }

        unsigned const long n = s.length();
        std::string answer = std::string(n, '0');

        for (int i = 0; i < (count - 1); ++i) {
            answer[i] = '1';
        }

        answer[n - 1] = '1';
        return answer;
    }
};