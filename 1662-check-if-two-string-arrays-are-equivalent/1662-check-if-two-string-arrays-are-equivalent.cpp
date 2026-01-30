class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        std::stringstream ss1;
        std::stringstream ss2;

        for (string str: word1) {
            ss1 << str;
        }

        for (string str: word2) {
            ss2 << str;
        }

        return ss1.str() == ss2.str();
    }
};