#include <bit>

class Solution {
public:
    int countSetBits(int n) {
        int count = 0;
        while (n > 0) {
            if ((n & 1) == 1) {
                count++;
            }
            n = n >> 1;
        }

        return count;
    }

    std::vector<int> sortByBits(const std::vector<int>& arr) {
        std::vector<std::pair<int, int>> valsWithBitCount;

        for (auto a : arr) {
            valsWithBitCount.push_back(std::make_pair(a, countSetBits(a)));
        }

        std::sort(
            valsWithBitCount.begin(), valsWithBitCount.end(),
            [](const std::pair<int, int>& t1, const std::pair<int, int>& t2) {
                if (t1.second != t2.second)
                    return t1.second < t2.second;
                return t1.first < t2.first;
            });

        std::vector<int> answer;

        for (auto t : valsWithBitCount) {
            answer.push_back(t.first);
        }

        return answer;
    }
};