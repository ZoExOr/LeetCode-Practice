
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       ListNode* cur = head, *prev = nullptr, *next = head;
       while(next != nullptr){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
       }
       return prev;

    }
};