class Solution {
public:
    int firstMatchingIndex(string s) {
        unsigned long left = 0;
        unsigned long right = s.size() - 1;

        while(left <= right) {
            if (s[left] == s[right]) {
                return left;
            } else {
                ++left;
                --right;
            }
        }
        
        return -1;
    }
};