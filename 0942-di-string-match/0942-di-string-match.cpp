class Solution {
public:
    vector<int> diStringMatch(const string& s) {
        const int N = s.length();
        int low = 0, high = N;
        vector<int> answer(N + 1, 0);

        for (int i = 0; i < N; ++i) {
            if (s[i] == 'I') {
                answer[i] = low++;
            } else {
                answer[i] = high--;
            }
        }

        answer[N] = low;
        return answer;
    }
};