class Solution {
public:
    std::vector<int> minCosts(const std::vector<int>& costs) {
        const unsigned long n = costs.size();
        std::vector<int> answer(n, -1);
        answer[0] = costs[0];

        for (unsigned long i = 1; i < n; ++i) {
            answer[i] = std::min(answer[i - 1], costs[i]);
        }

        return answer;
    }
};