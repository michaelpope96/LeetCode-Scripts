class Solution {
public:
    int countSeniors(vector<string>& details) {
        int answer = 0;

        for (string detail : details) {
            if (std::stoi(detail.substr(11, 2)) > 60) {
                ++answer;
            }
        }
        
        return answer;
    }
};