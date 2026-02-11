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
        int time = 0;
        while(start[0] != end[0] || start[1] != end[1]) {
            if (end[0] - start[0] > 0) {
                if (end[1] - start[1] > 0) {
                    // move diagonally up to the right
                    start[0] += 1;
                    start[1] += 1;
                } else if (end[1] - start[1] < 0) {
                    // move diagonally down to the right
                    start[0] += 1;
                    start[1] -= 1;
                } else {
                    // move straight right
                    return time + (end[0] - start[0]);
                }
            } else if (end[0] - start[0] < 0) {
                 if (end[1] - start[1] > 0) {
                    // move diagonally up to the left
                    start[0] -= 1;
                    start[1] += 1;
                } else if (end[1] - start[1] < 0) {
                    // move diagonally down to the left
                    start[0] -= 1;
                    start[1] -= 1;
                } else {
                    // move straight left
                    return time + (start[0] - end[0]);
                }
            } else {
                if (end[1] - start[1] > 0) {
                    // move straight up
                    return time + (end[1] - start[1]);
                } else if (end[1] - start[1] < 0) {
                    // move straight down
                    return time + (start[1] - end[1]);
                    start[1] -= 1;
                } else {
                    // we found the target
                }
            }

            ++time;
        }
        return time;
    }
};