/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution1 {
public:
    ListNode* reverseList(ListNode* head) {
        if (!head) return head;
        ListNode *dummy = new ListNode(-1);
        dummy->next = head;
        ListNode *current = head;
        while (current->next){
            ListNode *temp = current->next;
            current->next = temp->next;
            temp->next = dummy->next;
            dummy->next = temp;
        }
        return dummy->next;
    }
};

class Solution2 {
public:
    ListNode* reverseList(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode *p = head;
        head = reverseList(p->next);
        p->next->next = p;
        p->next = NULL;
        return head;
    }
};