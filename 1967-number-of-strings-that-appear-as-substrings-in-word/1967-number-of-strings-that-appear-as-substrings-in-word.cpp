class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int answer = 0;

        for (const string& pattern : patterns) {
            if (word.find(pattern) != std::string::npos) {
                ++answer;
            }
        }

        return answer;
    }
};