class Solution {
public:
    int prefixCount(const std::vector<std::string>& words,
                    const std::string& pref) {
        const unsigned long n = pref.length();
        int answer = 0;
        for (const std::string& word : words) {
            if (word.substr(0, n) == pref) {
                ++answer;
            }
        }

        return answer;
    }
};