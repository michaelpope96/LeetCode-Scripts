class Solution {
public:
    int sumOfN(const int& n) { return n * (n + 1) / 2; }

    std::vector<int>
    findMissingAndRepeatedValues(const std::vector<std::vector<int>>& grid) {
        std::set<int> foundValues;
        std::vector<int> answer;
        unsigned long tmpSum = 0;
        const unsigned long n = grid.size();

        for (const std::vector<int>& i : grid) {
            for (const int& j : i) {
                if (foundValues.find(j) != foundValues.end()) {
                    answer.emplace_back(j);
                } else {
                    foundValues.insert(j);
                    tmpSum += j;
                }
            }
        }

        answer.emplace_back(sumOfN(n * n) - tmpSum);
        return answer;
    }
};