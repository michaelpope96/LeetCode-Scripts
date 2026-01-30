class Solution {
public:
    int minimumSum(int num) {
        string s = std::to_string(num);
        std::vector<char> cArray;
        for (char c : s) {
            cArray.push_back(c);
        }

        std::sort(cArray.begin(), cArray.end());
        // Convert char digits to actual integers
        int d0 = cArray[0] - '0';
        int d1 = cArray[1] - '0';
        int d2 = cArray[2] - '0';
        int d3 = cArray[3] - '0';

        // Form two 2-digit numbers:
        // Smallest digits (d0, d1) go in the tens place
        int num1 = d0 * 10 + d2;
        int num2 = d1 * 10 + d3;

        return num1 + num2;
    }
};