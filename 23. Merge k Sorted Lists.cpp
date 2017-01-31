/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.size() == 0) return NULL;
        int n = lists.size();
        while (n > 1){
            int k = (n + 1) / 2;
            for (int i = 0 ; i < n / 2 ; i++){
                lists[i] = mergeTwoLists(lists[i], lists[i + k]);
            }
            n = k;
        }
        return lists[0];
    }
    ListNode* mergeTwoLists(ListNode *l1, ListNode *l2){
        ListNode *head = new ListNode(-1);
        ListNode *current = head;
        while (l1 && l2){
            if (l1->val < l2->val){
                current->next = l1;
                l1 = l1->next;
            }
            else {
                current->next = l2;
                l2 = l2->next;
            }
            current = current->next;
        }
        if (l1) current->next = l1;
        if (l2) current->next = l2;
        return head->next;
    }
};