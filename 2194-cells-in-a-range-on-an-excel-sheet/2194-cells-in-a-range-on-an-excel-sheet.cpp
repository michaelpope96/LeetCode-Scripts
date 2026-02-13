class Solution {
public:
    std::vector<std::string> cellsInRange(std::string s) {
        const char c1 = s[0];
        const char c2 = s[3];
        const int n1 = s[1] - '0';
        const int n2 = s[4] - '0';

        std::vector<std::string> answer;

        for (char i = c1; i <= c2; ++i) {
            for (int j = n1; j <= n2; ++j) {
                answer.emplace_back(i + std::to_string(j));
            }
        }

        return answer;
    }
};