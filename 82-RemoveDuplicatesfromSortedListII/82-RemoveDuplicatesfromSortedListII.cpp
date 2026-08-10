// Last updated: 10/08/2026, 08:57:42
1class Solution {
2public:
3    ListNode* deleteDuplicates(ListNode* head) {
4        ListNode dummy(0, head);
5        ListNode* prev = &dummy;
6        while (head) {
7            if (head->next && head->val == head->next->val) {
8                while (head->next && head->val == head->next->val)
9                    head = head->next;
10                prev->next = head->next;
11            } else {
12                prev = prev->next;
13            }
14            head = head->next;
15        }
16        return dummy.next;
17    }
18};
19