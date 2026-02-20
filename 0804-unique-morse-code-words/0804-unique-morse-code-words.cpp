class Solution {
public:
    int uniqueMorseRepresentations(const std::vector<std::string>& words) {
        std::set<std::string> transformations;

        std::map<char, std::string> mpp = {
            {'a', ".-"},   {'b', "-..."}, {'c', "-.-."}, {'d', "-.."},
            {'e', "."},    {'f', "..-."}, {'g', "--."},  {'h', "...."},
            {'i', ".."},   {'j', ".---"}, {'k', "-.-"},  {'l', ".-.."},
            {'m', "--"},   {'n', "-."},   {'o', "---"},  {'p', ".--."},
            {'q', "--.-"}, {'r', ".-."},  {'s', "..."},  {'t', "-"},
            {'u', "..-"},  {'v', "...-"}, {'w', ".--"},  {'x', "-..-"},
            {'y', "-.--"}, {'z', "--.."}};

        for (const std::string& word : words) {
            std::string tmp;
            for (char c : word) {
                tmp += mpp[c];
            }

            if (transformations.find(tmp) == transformations.end()) {
                transformations.insert(tmp);
            }
        }

        return static_cast<int>(transformations.size());
    }
};