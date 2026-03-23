class Solution {
public:
    std::string reverseByType(std::string s) {
        unsigned long left = 0;
        unsigned long right = s.length() - 1;
        // use two-pointer to swap the non-special characters
        bool isLeftChar = false;
        bool isRightChar = false;
        char tmp = 'a';
        while (left < right) {
            isLeftChar = std::isalpha(s[left]);
            isRightChar = std::isalpha(s[right]);
            if (isLeftChar && isRightChar) {
                tmp = s[left];
                s[left] = s[right];
                s[right] = tmp;
                ++left;
                --right;
            } else if (isLeftChar) {
                --right;
            } else if (isRightChar) {
                ++left;
            } else {
                --right;
                ++left;
            }
        }

        // use two-pointer to swap the special characters
        left = 0;
        right = s.length() - 1;
        while (left < right) {
            isLeftChar = std::isalpha(s[left]);
            isRightChar = std::isalpha(s[right]);
            if (!isLeftChar && !isRightChar) {
                tmp = s[left];
                s[left] = s[right];
                s[right] = tmp;
                ++left;
                --right;
            } else if (!isLeftChar) {
                --right;
            } else if (!isRightChar) {
                ++left;
            } else {
                --right;
                ++left;
            }
        }

        return s;
    }
};