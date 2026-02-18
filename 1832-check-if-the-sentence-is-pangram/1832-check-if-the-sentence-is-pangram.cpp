class Solution {
public:
    bool checkIfPangram(const std::string& sentence) {
        // Initialize array to zero to avoid undefined behavior
        int count[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                         0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

        for (const char c : sentence) {
            // Basic safety check to ensure we only count lowercase letters
            if (c >= 'a' && c <= 'z') {
                ++count[c - 'a'];
            }
        }

        // std::all_of returns true if the predicate is true for every element
        return std::all_of(std::begin(count), std::end(count),
                           [](int i) { return i > 0; });
    }
};