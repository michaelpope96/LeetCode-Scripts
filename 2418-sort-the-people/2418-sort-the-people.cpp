class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        std::map<int, int> heightToIdxMap;
        int n = heights.size();

        for (int i = 0; i < n; ++i) {
            heightToIdxMap[heights[i]] = i;
        }

        std::sort(heights.begin(), heights.end(), std::greater<int>());
        int idx = 0;
        std::vector<string> answer(n, "");
        for (int height : heights) {
            answer[idx++] = names[heightToIdxMap[height]];
        }

        return answer;
    }
};