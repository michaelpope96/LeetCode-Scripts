class Solution {
public:

    std::map<int, int> mpp;

    int pivotInteger(int n) {
        int total = sumDigits(n);
        int tmp = 0;
        for (int i = 0; i <= n; ++i) {
            tmp = sumDigits(i);
            if (tmp == (total - tmp + i)) {
                return i;
            }
        }

        return -1;
    }

    int sumDigits(const int& z) {
        return z * (z + 1) / 2;
    }
};