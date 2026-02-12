class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n = pref.length();
        int answer = 0;
        for (const string word: words) {
            if (word.substr(0, n) == pref) {
                ++answer;
            }
        }
        
        return answer;
    }
};