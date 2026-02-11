class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int totalTime = 0;

        for (int i = 0; i < (points.size() - 1); ++i) {
            totalTime += determineMinDistance(points[i], points[i+1]);
        }

        return totalTime;
    }

    int determineMinDistance(vector<int> start, vector<int> end) {
        vector<int> current = start;
        int time = 0;
        while(current[0] != end[0] || current[1] != end[1]) {
            if (end[0] - current[0] > 0) {
                if (end[1] - current[1] > 0) {
                    // move diagonally up to the right
                    current[0] += 1;
                    current[1] += 1;
                } else if (end[1] - current[1] < 0) {
                    // move diagonally down to the right
                    current[0] += 1;
                    current[1] -= 1;
                } else {
                    // move straight right
                    current[0] +=1;
                }
            } else if (end[0] - current[0] < 0) {
                 if (end[1] - current[1] > 0) {
                    // move diagonally up to the left
                    current[0] -= 1;
                    current[1] += 1;
                } else if (end[1] - current[1] < 0) {
                    // move diagonally down to the left
                    current[0] -= 1;
                    current[1] -= 1;
                } else {
                    // move straight left
                    current[0] -=1;
                }
            } else {
                if (end[1] - current[1] > 0) {
                    // move straight up
                    current[1] += 1;
                } else if (end[1] - current[1] < 0) {
                    // move straight down
                    current[1] -= 1;
                } else {
                    // we found the target
                }
            }

            ++time;
        }
        return time;
    }
};