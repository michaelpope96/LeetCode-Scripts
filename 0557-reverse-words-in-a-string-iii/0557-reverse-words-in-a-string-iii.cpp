class Solution {
public:
    std::string reverseWords(std::string s) {
        const unsigned long n = s.length();
        long left = 0;
        unsigned long spacePos = 0;
        unsigned long wordLen = 0;
        std::string answer;

        while (left < n) {
            spacePos = s.find(' ', left);

            wordLen =
                spacePos != std::string::npos ? spacePos - left : n - left;

            for (long i = left + wordLen - 1; i >= left; --i) {
                answer += s[i];
            }
            answer += ' ';

            left += wordLen + 1;
        }

        answer.pop_back();
        return answer;
    }
};