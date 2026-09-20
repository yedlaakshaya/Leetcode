class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        if (head == NULL || left == right)
            return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;

        // Move prev to the node before left
        for (int i = 1; i < left; i++) {
            prev = prev->next;
        }

        // Reverse from left to right
        ListNode* curr = prev->next;

        for (int i = 0; i < right - left; i++) {
            ListNode* next = curr->next;

            curr->next = next->next;
            next->next = prev->next;
            prev->next = next;
        }

        return dummy->next;
    }
};