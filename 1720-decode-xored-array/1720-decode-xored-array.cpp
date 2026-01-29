class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int n = encoded.size() + 1;
        std::vector<int> result(n);
        result[0] = first;

        for (int i = 1; i < n; ++i) {
            result[i] = (encoded[i - 1] ^ result[i - 1]);
            std::cout << result[i] << ' ';
        }

        return result;
    }
};