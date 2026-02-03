class Solution {
public:
    string decodeMessage(string key, string message) {
        std::map<char, char> dictionary;
        char value = 'a';
        for (char c : key) {
            if (c == ' ' || dictionary.contains(c)) {
                continue;
            }
            dictionary[c] = value;
            ++value;
        }

        std::stringstream ss;

        for (char c : message) {
            if (c == ' ') {
                ss << " ";
            } else {
                ss << dictionary[c];
            }
        }

        return ss.str();
    }
};