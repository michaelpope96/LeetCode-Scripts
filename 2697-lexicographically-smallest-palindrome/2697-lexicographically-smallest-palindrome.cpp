class Solution {
public:
    std::string makeSmallestPalindrome(std::string s) {
        // Use size_t for type safety with s.size()
        std::size_t left = 0;
        std::size_t right = s.size() - 1;

        // Condition changed to left < right
        while (left < right) {
            if (s[left] != s[right]) {
                // Find the smaller character and assign it to both positions
                char minChar = std::min(s[left], s[right]);
                s[left] = s[right] = minChar;
            }
            ++left;
            --right;
        }

        return s;
    }
};