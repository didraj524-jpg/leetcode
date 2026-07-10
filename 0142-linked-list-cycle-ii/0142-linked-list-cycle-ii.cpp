/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* detectCycle(ListNode* head) {

        if (head == NULL || head->next == NULL)
            return NULL;

        ListNode* fast = head;
        ListNode* slow = head;
        bool detect = false;

        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;

            if (fast == slow) {
                detect = true;
                break;
            }
        }

        if (detect) {
            slow = head;
            while (fast != NULL) {
                if (fast == slow)
                    return slow;
                fast = fast->next;
                slow = slow->next;
            }
        }
        return NULL;
    }
};