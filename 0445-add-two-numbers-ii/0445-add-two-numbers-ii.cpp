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

    ListNode* convert(vector<int>& nums) {

        ListNode* head = new ListNode(nums[nums.size() - 1]);
        ListNode* mover = head;
        for (int i = nums.size() - 2; i >= 0; i--) {
            ListNode* temp = new ListNode(nums[i]);
            mover->next = temp;
            mover = mover->next;
        }

        return head;
    }

public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1 = l1;
        ListNode* t2 = l2;
        vector<int> L1;
        vector<int> L2;
        while (t1 != NULL || t2 != NULL) {
            if (t1) {
                L1.push_back(t1->val);
                t1 = t1->next;
            }
            if (t2) {
                L2.push_back(t2->val);
                t2 = t2->next;
            }
        }

        vector<int> l3;

        int a = L1.size() - 1;
        int b = L2.size() - 1;
        int carry = 0;
        while (a >= 0 || b >= 0) {
            int sum = carry;
            if (a >= 0)
                sum += L1[a];
            if (b >= 0)
                sum += L2[b];

            l3.push_back(sum % 10);
            carry = sum / 10;

            a--;b--;
        }

        if (carry)
            l3.push_back(carry);

        ListNode* newNode = convert(l3);

        return newNode;
    }
};