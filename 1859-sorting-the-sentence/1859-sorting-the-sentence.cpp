class Solution {
public:
    std::string sortSentence(const std::string& s) {
        std::string answer;

        for (int i = 1; i <= 9; ++i) {
            const unsigned long intPos = s.find('0' + i);
            if (intPos == std::string::npos) {
                break;
            }
            unsigned long spacePos = s.find_last_of(' ', intPos);
            if (spacePos == std::string::npos) {
                spacePos = 0;
            }
            const unsigned long length =
                spacePos != 0 ? intPos - spacePos - 1 : intPos - spacePos;
            answer += s.substr(spacePos != 0 ? spacePos + 1 : 0, length);
            answer += ' ';
        }
        answer.pop_back();

        return answer;
    }
};