class Solution {
public:
    int maxDepth(std::string s) {
    int maxParenthesis = 0;
    std::stack<char> stk;
    for (char c : s) {
        if (c == '(') {
            stk.push(c);
            maxParenthesis = std::max(maxParenthesis, static_cast<int>(stk.size()));
        } else if (c == ')') {
            stk.pop();
        }
    }

    return maxParenthesis;
}
};