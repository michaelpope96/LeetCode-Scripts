class Solution {
public:
    int maxDistinct(string s) {
        int answer = 0;
        std::unordered_set<char> seenChars;

        for (const char& c: s) {
            if (!seenChars.contains(c)) {
                seenChars.insert(c);
            }
        }
        
        return seenChars.size();
    }
};