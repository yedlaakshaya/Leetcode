class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode* first = head;
        ListNode* second = head;

        // Find kth node from beginning
        for (int i = 1; i < k; i++) {
            first = first->next;
        }

        // Move first k-1 steps ahead
        ListNode* temp = first;
        while (temp->next != NULL) {
            temp = temp->next;
            second = second->next;
        }

        // Swap values
        swap(first->val, second->val);

        return head;
    }
};