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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if (head == NULL) {
            return head;
        }
        if (head->next == NULL && n == 1) {
            delete head;
            head = NULL;
            return head;
        }

        ListNode* temp = head;
        int count = 0;

        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        int x = count - n;

        if (x == 0) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        if (x > 0) {
            temp = head;
            int cnt = 0;
            while (temp != NULL) {
                cnt++;
                if (cnt == x) {
                    ListNode* erase = temp->next;
                    temp->next = temp->next->next;
                    erase->next = nullptr;
                    delete erase;
                    break;
                }
                temp = temp->next;
            }
        }
        return head;
    }
};