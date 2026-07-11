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
    ListNode* swapNodes(ListNode* head, int k) {

        ListNode*fast=head;
        ListNode*slow=head;
        while(k>1){
            k--;
            fast=fast->next;
        }
        ListNode*t1=fast;
        int a=t1->val;

        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }

        ListNode*t2=slow;
        int b=t2->val;

        t2->val=a;
        t1->val=b;


        return head;
        
    }
};