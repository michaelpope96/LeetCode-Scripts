class Solution {
public:
    int diagonalSum(const std::vector<std::vector<int>>& mat) {
        int primary = 0;
        int secondary = 0;
        const unsigned long n = mat.size();

        for (auto i = 0; i < n; ++i) {
            primary += mat[i][i];
            if ((n-1-i) != i) {
                secondary += mat[n - 1 - i][i];
            }
        }

        return primary + secondary;
    }
};