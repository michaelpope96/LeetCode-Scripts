class Solution {
public:
    int maximumNumberOfStringPairs(const std::vector<std::string>& words) {
        int answer = 0;
        std::set<std::string> wordSet;

        for (const std::string& word : words) {
            wordSet.insert(word);
        }

        for (const std::string& word : words) {
            std::string reversed = std::string(word.rbegin(), word.rend());
            if (reversed == word) {
                wordSet.erase(word);
                continue;
            } else if (wordSet.find(reversed) != wordSet.end()) {
                ++answer;
                wordSet.erase(word);
                wordSet.erase(reversed);
            }
        }

        return answer;
    }
};