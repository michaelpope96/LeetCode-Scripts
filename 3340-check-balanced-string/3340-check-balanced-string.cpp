class Solution {
public:
    bool isBalanced(string num) {
        int oddVal = 0;
        int evenVal = 0;
        unsigned const long n = num.length();

        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                evenVal += (num[i] - '0');
            } else {
                oddVal += (num[i] - '0');
            }
        }
        
        return oddVal == evenVal;
    }
};