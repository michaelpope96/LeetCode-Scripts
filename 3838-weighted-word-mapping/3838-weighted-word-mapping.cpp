class Solution {
public:
    std::string mapWordWeights(const std::vector<std::string>& words,
                               const std::vector<int>& weights) {
        std::string answer;

        for (const std::string& word : words) {
            int weight = 0;
            for (const char& c : word) {
                weight += weights[c - 'a'];
            }
            const char mod = 'z' - (weight % 26);
            answer += mod;
        }

        return answer;
    }
};