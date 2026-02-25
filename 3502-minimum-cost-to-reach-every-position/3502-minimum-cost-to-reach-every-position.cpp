class Solution {
public:
    std::vector<int> minCosts(const std::vector<int>& costs) {
        const unsigned long n = costs.size();
        std::vector<int> answer;
        answer.reserve(n);

        int maxPrice = costs[0];
        answer.emplace_back(maxPrice);

        for (unsigned long i = 1; i < n; ++i) {
            if (costs[i] < maxPrice) {
                answer.emplace_back(costs[i]);
                maxPrice = costs[i];
            } else {
                answer.emplace_back(answer[i - 1]);
            }
        }

        return answer;
    }
};