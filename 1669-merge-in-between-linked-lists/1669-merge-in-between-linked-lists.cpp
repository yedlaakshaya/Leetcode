class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {

        // Find node just before position a
        ListNode* before = list1;

        for (int i = 0; i < a - 1; i++) {
            before = before->next;
        }

        // Find node at position b
        ListNode* after = before;

        for (int i = 0; i < b - a + 2; i++) {
            after = after->next;
        }

        // Connect list1 before a to list2
        before->next = list2;

        // Find last node of list2
        while (list2->next != NULL) {
            list2 = list2->next;
        }

        // Connect list2 to node after b
        list2->next = after;

        return list1;
    }
};