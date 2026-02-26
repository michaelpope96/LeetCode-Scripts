class Solution {
public:
    int maxProductDifference(const std::vector<int>& nums) {
        std::priority_queue<int> maxHeap;
        std::priority_queue<int, std::vector<int>, std::greater<>> minHeap;
        for (const int& num : nums) {
            maxHeap.push(num);
            minHeap.push(num);
        }

        const int max = maxHeap.top();
        maxHeap.pop();

        const int min = minHeap.top();
        minHeap.pop();
        return (max * maxHeap.top()) - (min * minHeap.top());
    }
};