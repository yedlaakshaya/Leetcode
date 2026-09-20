class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        
        vector<int> ans;
        stack<int> st;

        // Store linked-list values in an array
        while (head != NULL) {
            ans.push_back(head->val);
            head = head->next;
        }

        // Find next greater element
        for (int i = 0; i < ans.size(); i++) {

            while (!st.empty() && ans[i] > ans[st.top()]) {
                ans[st.top()] = ans[i];
                st.pop();
            }

            st.push(i);
        }

        // Remaining positions have no greater node
        while (!st.empty()) {
            ans[st.top()] = 0;
            st.pop();
        }

        return ans;
    }
};