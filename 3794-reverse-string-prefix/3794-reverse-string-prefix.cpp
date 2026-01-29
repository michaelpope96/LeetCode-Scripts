class Solution {
public:
    string reversePrefix(string s, int k) {
        std::stringstream ss;

        for (int i = k-1; i >= 0; --i) {
            std::cout << s[i];
            ss << s[i];
        }

        ss << s.substr(k);
        return ss.str();
    }
};