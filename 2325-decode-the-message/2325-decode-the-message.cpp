class Solution {
public:
    string decodeMessage(string key, string message) {
        std::map<char, char> dictionary;
        char value = 'a';
        for (char c : key) {
            if (c != ' ' && !dictionary.contains(c)) {
                dictionary[c] = value;
                ++value;
            }
        }

        string answer = "";

        for (char c : message) {
            if (c == ' ') {
                answer += " ";
            } else {
                answer += dictionary[c];
            }
        }

        return answer;
    }
};