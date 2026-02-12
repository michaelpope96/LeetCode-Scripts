class Solution {
public:
    int earliestTime(const std::vector<std::vector<int>>& tasks) {
        int earliestTime = std::numeric_limits<int>::max();

        for (const std::vector<int>& task : tasks) {
            earliestTime = std::min(earliestTime, task[0] + task[1]);
        }

        return earliestTime;
    }
};