/**
 * Definition for singly-linked list.
 * struct ListNode {
 * int val;
 * ListNode *next;
 * ListNode() : val(0), next(nullptr) {}
 * ListNode(int x) : val(x), next(nullptr) {}
 * ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseLL(ListNode* start) {
        ListNode* prev = nullptr;
        ListNode* current = start;
        
        while (current != nullptr) {
            ListNode* nextptr = current->next;
            current->next = prev;
            prev = current;
            current = nextptr;
        }
        return prev; 
    }

    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return true;

        ListNode* fast = head;
        ListNode* slow = head;

        // 1. Find the middle configuration
        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // 2. Reverse the second half
        ListNode* newHead = reverseLL(slow->next);

        // 3. Compare halves
        ListNode* firstHalf = head;
        ListNode* secondHalf = newHead;
        
        while (secondHalf != nullptr) {
            if (firstHalf->val != secondHalf->val) {
                return false; 
            }
            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }
        
        return true;
    }
};