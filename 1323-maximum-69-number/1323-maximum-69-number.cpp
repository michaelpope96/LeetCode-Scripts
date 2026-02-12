class Solution {
public:
    int maximum69Number(const int num) {
        std::string s = std::to_string(num);
        const unsigned long n = s.size();
        for (auto i = 0; i < n; ++i) {
            if (s[i] == '6') {
                s[i] = '9';
                break;
            }
        }

        return std::stoi(s);
    }
};