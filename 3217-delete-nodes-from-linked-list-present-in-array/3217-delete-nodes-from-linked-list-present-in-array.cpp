class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        
        unordered_set<int> s(nums.begin(), nums.end());

        // Remove nodes from the beginning
        while (head != NULL && s.count(head->val)) {
            head = head->next;
        }

        ListNode* curr = head;

        // Remove nodes from the rest
        while (curr != NULL && curr->next != NULL) {
            
            if (s.count(curr->next->val)) {
                curr->next = curr->next->next;
            }
            else {
                curr = curr->next;
            }
        }

        return head;
    }
};