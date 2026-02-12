class Solution {
public:
    int evenNumberBitwiseORs(const std::vector<int>& nums) {
    int answer = 0;

    for (const int num : nums) {
        if (num % 2 == 0) {
            answer |= num;
        }
    }

    return answer;
}
};