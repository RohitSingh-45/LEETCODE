class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        // Dummy node banaya
        ListNode* dummy = new ListNode(0);

        // Result list ka current pointer
        ListNode* current = dummy;

        // Carry store karega
        int carry = 0;

        // Jab tak koi bhi list ya carry baaki hai
        while (l1 != NULL || l2 != NULL || carry != 0) {

            int sum = 0;

            // l1 ka value add karo
            if (l1 != NULL) {
                sum = sum + l1->val;
                l1 = l1->next;
            }

            // l2 ka value add karo
            if (l2 != NULL) {
                sum = sum + l2->val;
                l2 = l2->next;
            }

            // Carry bhi add karo
            sum = sum + carry;

            // Current digit
            int digit = sum % 10;

            // New carry
            carry = sum / 10;

            // New node banao
            current->next = new ListNode(digit);

            // Current ko next node par le jao
            current = current->next;
        }

        // Dummy ke next se actual answer start hota hai
        return dummy->next;
    }
};