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
    ListNode* deleteDuplicates(ListNode* head) {

        if(head==nullptr)return head;
        if(head->next==NULL)return head;
        ListNode* temp=head;
while (temp != nullptr && temp->next != nullptr){
            if(temp->val==temp->next->val){
                ListNode*after=temp->next;
                temp->next=temp->next->next;
                after->next=nullptr;
                delete after;

            }
            if(temp != nullptr && temp->next != nullptr&&temp->val!=temp->next->val){
            temp=temp->next;}
        }
        return head;
    }
};