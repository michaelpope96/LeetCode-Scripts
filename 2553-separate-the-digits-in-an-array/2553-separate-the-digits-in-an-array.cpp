class Solution {
public:
    vector<int> separateDigits(const vector<int>& nums) {
        std::vector<int> answer;

        for (const int& num : nums) {
            std::string tmp = std::to_string(num);
            for (const char& c : tmp) {
                answer.emplace_back(c - '0');
            }
        }

        return answer;
    }
};