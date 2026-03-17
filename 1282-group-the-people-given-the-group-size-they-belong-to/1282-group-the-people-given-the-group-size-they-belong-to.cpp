class Solution {
public:
    std::vector<std::vector<int>>
    groupThePeople(const std::vector<int>& groupSizes) {
        std::vector<std::vector<int>> answer;
        std::map<int, int> sizeToListPos;
        int currentListIdx = 0;
        const unsigned long n = groupSizes.size();

        int currGroupSize = 0;
        for (int idx = 0; idx < n; ++idx) {
            currGroupSize = groupSizes[idx];

            auto result = sizeToListPos.find(currGroupSize);
            if (result == sizeToListPos.end()) {
                sizeToListPos[currGroupSize] = currentListIdx++;
                answer.push_back(std::vector<int>{idx});
            } else if (answer[result->second].size() < currGroupSize) {
                answer[result->second].push_back(idx);
            } else {
                answer.push_back(std::vector<int>{idx});
                sizeToListPos[currGroupSize] = currentListIdx++;
            }
        }

        return answer;
    }
};