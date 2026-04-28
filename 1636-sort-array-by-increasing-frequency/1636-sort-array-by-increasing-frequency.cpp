class Solution {
public:
    std::vector<int> frequencySort(std::vector<int>& nums) {
    std::unordered_map<int, int> counts;
    for (int num : nums) {
        counts[num]++;
    }

    std::ranges::sort(nums, [&](const int a, const int b) {
        if (counts[a] != counts[b]) {
            return counts[a] < counts[b]; // Increasing frequency
        }
        return a > b; // Decreasing order for same frequency
    });

    return nums;
}
};