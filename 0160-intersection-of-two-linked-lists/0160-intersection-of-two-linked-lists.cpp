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
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        int cntA = 0;
        ListNode* temp = headA;
        while (temp != NULL) {
            cntA++;
            temp = temp->next;
        }
        int cntB = 0;
        temp = headB;
        while (temp != NULL) {
            cntB++;
            temp = temp->next;
        }
        int diff = abs(cntA - cntB);
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        if (diff != 0) {
            if (cntA > cntB) {
                for (int i = 0; i < diff; i++) {
                    tempA = tempA->next;
                }
            } else if (cntB > cntA) {
                for (int i = 0; i < diff; i++) {
                    tempB = tempB->next;
                }
            }
        }
    

    while (tempA != NULL) {
        if (tempA == tempB) {
         
            return tempA;
        }
           tempA=tempA->next;
           tempB=tempB->next;

    }

    return NULL;
}
}
;