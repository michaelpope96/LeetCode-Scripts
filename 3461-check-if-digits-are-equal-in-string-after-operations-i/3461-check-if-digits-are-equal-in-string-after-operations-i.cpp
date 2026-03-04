class Solution {
public:
    bool hasSameDigits(std::string s) {
        unsigned long n = s.size();
        std::string tmp;
        while (n > 2) {
            tmp = std::string(n - 1, '0');
            for (int i = 0; i < (n - 1); ++i) {
                tmp[i] = (((s[i] - '0') + (s[i + 1] - '0')) % 10) + '0';
            }
            std::cout << "tmp: " << tmp << std::endl;
            s = tmp;
            --n;
        }

        return s[0] == s[1];
    }
};