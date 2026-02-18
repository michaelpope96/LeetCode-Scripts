class Solution {
public:
    std::string removeOuterParentheses(const std::string& s) {
        std::string answer;
        unsigned long leftPos = 0;
        const unsigned long n = s.length();
        std::stack<char> stk;

        for (unsigned long i = 0; i < n; ++i) {
            if (s[i] == '(') {
                stk.push('(');
            } else if (s[i] == ')') {
                stk.pop();
            }

            if (stk.empty()) {
                answer += s.substr(leftPos + 1, i - leftPos - 1);
                leftPos = i + 1;
            }
        }

        return answer;
    }
};