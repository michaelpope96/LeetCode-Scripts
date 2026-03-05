class Solution {
public:
    int totalMoney(const int n) {
        int answer = 0;
        int weekNumber = (n / 7) + 1;

        for (int week = 1; week <= weekNumber; ++week) {
            int i = 1;
            for (int day = week;
                 day < (week + 7) && (((week - 1) * 7) + i) <= n; ++day, ++i) {
                answer += day;
            }
        }

        return answer;
    }
};