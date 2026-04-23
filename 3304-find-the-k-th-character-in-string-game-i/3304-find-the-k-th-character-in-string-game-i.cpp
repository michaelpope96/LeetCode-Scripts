class Solution {
public:
    char kthCharacter(const int k) {
        std::string word = "a";

        while (word.size() < k) {
            std::string tmp;
            for (const char c : word) {
                tmp += (c + 1);
            }
            word += tmp;
        }

        return word[k - 1];
    }
};