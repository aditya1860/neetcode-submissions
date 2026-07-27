class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* check = head;

        for (int i = 0; i < k; i++) {
            if (check == nullptr) {
                return head;
            }

            check = check->next;
        }

    
        ListNode* previous = nullptr;
        ListNode* curr = head;

        for (int i = 0; i < k; i++) {

            ListNode* temp = curr->next;

            curr->next = previous;

            previous = curr;

            curr = temp;
        }
        head->next = reverseKGroup(curr, k);
        return previous;
    }
};