class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        std::priority_queue<int, std::vector<int>, std::less<int>> maxHeap;
        std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
        for (const int& num : nums) {
            maxHeap.push(num);
            minHeap.push(num);
        }
        
        int max = maxHeap.top();
        maxHeap.pop();

        int min = minHeap.top();
        minHeap.pop();
        return (max * maxHeap.top()) - (min * minHeap.top());
    }
};