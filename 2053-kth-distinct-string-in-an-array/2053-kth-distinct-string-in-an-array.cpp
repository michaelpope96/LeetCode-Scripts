class Solution {
public:
    std::string kthDistinct(const std::vector<std::string>& arr, int k) {
        std::unordered_set<std::string> seenBefore;
        std::unordered_set<std::string> duplicates;

        for (const std::string& s : arr) {
            if (seenBefore.find(s) == seenBefore.end()) {
                seenBefore.insert(s);
            } else {
                duplicates.insert(s);
            }
        }

        for (const std::string& s : arr) {
            if (duplicates.find(s) == duplicates.end()) {
                if (k == 1) {
                    return s;
                }
                --k;
            }
        }

        return "";
    }
};