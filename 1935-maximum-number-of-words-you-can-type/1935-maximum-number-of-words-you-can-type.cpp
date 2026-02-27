class Solution {
public:
    int canBeTypedWords(const std::string& text,
                        const std::string& brokenLetters) {
        std::set<char> brokenKeys;

        for (char c : brokenLetters) {
            brokenKeys.insert(c);
        }

        int answer = 0;
        unsigned long start = 0;
        unsigned long end = 0;
        unsigned const long n = text.length();
        unsigned long result;
        while (start < n) {
            result = text.find(' ', start);
            end = result == std::string::npos ? n : result;
            std::string word = text.substr(start, end - start);
            ++answer;
            for (char c : word) {
                if (brokenKeys.find(c) != brokenKeys.end()) {
                    --answer;
                    break;
                }
            }
            start = end + 1;
        }

        return answer;
    }
};