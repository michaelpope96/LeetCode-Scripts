class Solution {
public:
    int countAsterisks(const std::string& s) {
        std::stack<char> stk;
        int answer = 0;
        for (char c : s) {
            if (c == '|') {
                if (stk.empty()) {
                    stk.push(c);
                } else {
                    stk.pop();
                }
            } else if (c == '*' && stk.empty()) {
                ++answer;
            }
        }

        return answer;
    }
};