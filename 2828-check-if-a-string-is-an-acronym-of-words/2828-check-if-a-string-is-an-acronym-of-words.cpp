class Solution {
public:
    bool isAcronym(const std::vector<std::string>& words,
                   const std::string& s) {
        string result = "";
        unsigned const long n = words.size();
        for (unsigned long i = 0; i < n; i++) {
            string p = words[i];
            result += p[0];
        }
        return result == s;
    }
};