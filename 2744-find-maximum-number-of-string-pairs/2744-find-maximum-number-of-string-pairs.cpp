class Solution {
public:
    int maximumNumberOfStringPairs(const std::vector<std::string>& words) {
        int answer = 0;
        std::unordered_set<std::string> wordSet;
        std::string reversed;

        for (const std::string& word : words) {
            reversed = std::string(word.rbegin(), word.rend());

            if (reversed == word) {
                continue;
            } else if (wordSet.find(reversed) != wordSet.end()) {
                ++answer;
                wordSet.erase(reversed);
            } else {
                wordSet.insert(word);
            }
        }

        return answer;
    }
};