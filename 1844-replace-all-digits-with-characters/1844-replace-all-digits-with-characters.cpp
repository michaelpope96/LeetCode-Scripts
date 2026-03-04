class Solution {
public:
    string replaceDigits(string s) {
        unsigned const long n = s.length();
        for (int i = 1; i < n; i += 2) {
            s[i] = s[i-1] + (s[i] - '0'); 
        }

        return s;
    }
};