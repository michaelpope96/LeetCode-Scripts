class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        unsigned long n = matrix.size();
        std::vector<int> answer(n, 0);
        
        for (auto i = 0; i < n; ++i) {
            for (auto j = i; j < n; ++j) {
                if (matrix[i][j]) {
                    answer[i] += 1;
                    answer[j] += 1;
                }
            }
        }

        return answer;
    }
};