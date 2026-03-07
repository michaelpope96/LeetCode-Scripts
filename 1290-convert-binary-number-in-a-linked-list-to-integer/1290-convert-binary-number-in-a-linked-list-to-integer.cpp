/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        // Use unsigned to prevent undefined behavior during shifts
        unsigned int answer = 0;

        while (head != nullptr) {
            // Shift left to make room, then OR in the new bit
            answer = (answer << 1) | head->val;
            head = head->next;
        }

        return static_cast<int>(answer);
    }
};