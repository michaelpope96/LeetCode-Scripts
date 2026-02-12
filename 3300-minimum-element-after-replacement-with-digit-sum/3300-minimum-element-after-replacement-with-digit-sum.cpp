class Solution {
public:
    int minElement(const std::vector<int>& nums) {
        int answer = std::numeric_limits<int>::max();;
        for (int num : nums) {
            int sum = 0;

            while (num > 0) {
                sum += num % 10;
                if (sum >= answer) {
                    break;
                } else {
                    num /= 10;
                }
            }

            answer = std::min(answer, sum);
        }

        return answer;
    }
};