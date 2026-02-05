class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey,
                     string ruleValue) {
        int matchIdx = 0;
        int answer = 0;

        if (ruleKey == "type") {
            matchIdx = 0;
        } else if (ruleKey == "color") {
            matchIdx = 1;
        } else if (ruleKey == "name") {
            matchIdx = 2;
        } else {
            std::cout << "Invalid ruleKey: " << ruleKey << std::endl;
        }

        for (vector<string> item : items) {
            if (item[matchIdx] == ruleValue) {
                ++answer;
            }
        }

        return answer;
    }
};