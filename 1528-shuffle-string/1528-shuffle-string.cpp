class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string answer = s;
        int n = indices.size();

        for (int i = 0; i < n; ++i) {
            answer[indices[i]] = s[i]; 
        }

        return answer;
    }
};