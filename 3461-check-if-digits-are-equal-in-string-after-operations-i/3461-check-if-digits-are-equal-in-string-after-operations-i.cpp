class Solution {
public:
    bool hasSameDigits(std::string s) {
        unsigned long n = s.size();
        std::string tmp;
        while (n > 2) {
            for (int i = 0; i < n - 1; ++i) {
                s[i] = (((s[i] - '0') + (s[i + 1] - '0')) % 10) + '0';
            }
            --n;
        }

        return s[0] == s[1];
    }
};