class Solution {
public:
    ListNode* reverseEvenLengthGroups(ListNode* head) {

        ListNode* prevGroup = NULL;
        ListNode* curr = head;
        int groupSize = 1;

        while (curr != NULL) {

            // Find actual length of current group
            ListNode* temp = curr;
            int count = 0;

            while (temp != NULL && count < groupSize) {
                temp = temp->next;
                count++;
            }

            // Reverse if group length is even
            if (count % 2 == 0) {

                ListNode* prev = temp;
                ListNode* node = curr;

                for (int i = 0; i < count; i++) {
                    ListNode* next = node->next;
                    node->next = prev;
                    prev = node;
                    node = next;
                }

                // Connect previous group
                if (prevGroup != NULL)
                    prevGroup->next = prev;

                prevGroup = curr;
                curr = temp;

            } else {

                // Don't reverse odd-length group
                for (int i = 0; i < count; i++) {
                    prevGroup = curr;
                    curr = curr->next;
                }
            }

            groupSize++;
        }

        return head;
    }
};