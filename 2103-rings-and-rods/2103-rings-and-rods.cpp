class Solution {
public:
    int countPoints(const std::string& rings) {
        int answer = 0;
        const unsigned long twoN = rings.length();
        bool ringColors[10][3];

        int rod = 0;
        char color;

        for (unsigned long i = 0; i < twoN; i += 2) {
            rod = rings[i + 1] - '0';
            color = rings[i];
            if (color == 'R') {
                ringColors[rod][0] = true;
            } else if (color == 'G') {
                ringColors[rod][1] = true;
            } else if (color == 'B') {
                ringColors[rod][2] = true;
            } else {
                std::cout << "Wrong color" << std::endl;
            }
        }

        for (auto& ringColor : ringColors) {
            if (ringColor[0] && ringColor[1] && ringColor[2]) {
                ++answer;
            }
        }

        return answer;
    }
};