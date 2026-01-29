class Solution {
public:
    int findClosest(int x, int y, int z) {
        int xDist = std::abs(z - x);
        int yDist = std::abs(z - y);
        if (xDist < yDist) {
            return 1;
        } else if (xDist > yDist) {
            return 2;
        } else {
            return 0;
        }
    }
};