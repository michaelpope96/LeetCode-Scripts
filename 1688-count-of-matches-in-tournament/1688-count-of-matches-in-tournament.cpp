class Solution {
public:
    int numberOfMatches(int n) {
        int matches = 0;
        int temp = 0;
        while (n > 1) {
            temp = 0;
            if (n % 2 == 1) {
                temp = (n - 1) / 2;
                matches += temp;
                n = (temp + 1);
            } else {
                n /= 2;
                matches += n;
            }
        }

        return matches;
    }
};