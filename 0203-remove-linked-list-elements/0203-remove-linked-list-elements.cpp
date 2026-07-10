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
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL)
            return head;
        if (head->next == NULL && head->val == val) {
            delete head;
            head = nullptr;
            return head;
        }

        ListNode* temp = head;
        while (temp != NULL && temp->next != NULL) {
            if (temp->next->val == val) {
                ListNode* dlt = temp->next;
                temp->next = temp->next->next;
                dlt->next = nullptr;
                delete dlt;
            } else {

                temp = temp->next;
            }
        }
        if (head->val == val) {
            temp=head;
            temp=temp->next;
            delete head;
            head=temp;
            return head;
        }
        return head;
    }
};