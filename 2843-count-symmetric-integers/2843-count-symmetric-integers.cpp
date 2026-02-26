class Solution {
public:
    int countSymmetricIntegers(const int low, const int high) {
        int answer = 0;
        std::string tmp;
        int tmpLength = 0;

        for (int i = low; i <= high; ++i) {
            tmp = std::to_string(i);
            tmpLength = tmp.length();
            if (tmpLength % 2 != 0) {
                continue;
            }
            int leftSum = 0, rightSum = 0;
            for (int j = 0; j < tmpLength / 2; ++j) {
                leftSum += tmp[j] - '0';
                rightSum += tmp[tmpLength - j - 1] - '0';
            }
            if (leftSum == rightSum) {
                ++answer;
            }
        }

        return answer;
    }
};