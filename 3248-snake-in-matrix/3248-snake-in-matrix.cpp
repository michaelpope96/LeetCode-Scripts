class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int position = 0;

        for (const string& command: commands) {
            if (command == "UP") {
                position -= n;
            } else if (command == "DOWN") {
                position += n;
            } else if (command == "RIGHT") {
                position += 1;
            } else if (command == "LEFT") {
                position -= 1;
            }
        }
        
        return position;
    }
};