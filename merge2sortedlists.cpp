class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1 && !list2) {
            return NULL;
        }
        
        if (!list1) {
            return list2;
        }
        if (!list2) {
            return list1;
        }
        
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;
        
        while (list1 && list2) {
            if (list1->val < list2->val) {
                current->next = list1;
                list1 = list1->next;
            } else {
                current->next = list2;
                list2 = list2->next;
            }
            current = current->next;
        }
        
        if (list1) {
            current->next = list1;
        } else {
            current->next = list2;
        }
        
        return dummy->next;
    }
};
