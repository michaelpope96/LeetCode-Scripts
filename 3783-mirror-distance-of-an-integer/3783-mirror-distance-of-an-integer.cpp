class Solution {
public:
    int mirrorDistance(int n) {
        return std::abs(n - reverse(n));
    }

    int reverse(int n) {
        std::string s = std::to_string(n);
        std::reverse(s.begin(), s.end());
        return std::stoi(s);
    }
};