class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max = std::numeric_limits<int>::min();

        for (int num : nums) {
            max = std::max(max, num);
        }

        int answer = 0;
        for (int num : nums) {
            answer += (max - num);
        }

        return answer;
    }
};