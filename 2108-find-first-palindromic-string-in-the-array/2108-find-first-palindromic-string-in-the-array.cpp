class Solution {
public:
    bool isPalindromic(const std::string& word) {
        unsigned long left = 0;
        unsigned long right = word.length() - 1;

        while (left < right) {
            if (word[left] != word[right]) {
                return false;
            }
            ++left;
            --right;
        }

        return true;
    }

    std::string firstPalindrome(const std::vector<std::string>& words) {

        for (const auto& word : words) {
            if (isPalindromic(word)) {
                return word;
            }
        }

        return "";
    }
};