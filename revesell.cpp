class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* current = head;
        ListNode* previous = nullptr;
        ListNode* next = nullptr;

        while(current != nullptr){
            next = current->next;
            current->next = previous;
            previous = current;
            current = next;
        }

        return previous;
    }
};
