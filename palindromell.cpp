class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> stack;
        ListNode* current = head;

        while(current){
            stack.push(current->val);
            current = current->next;
        }

        current = head;

        while(current && current->val == stack.top()){
            stack.pop();
            current = current->next;
        }
        
        return current == nullptr;
    }
};
