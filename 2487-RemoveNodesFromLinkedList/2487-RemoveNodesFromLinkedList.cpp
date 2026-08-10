// Last updated: 10/08/2026, 07:55:55
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* reverseList(ListNode* head) {
14        ListNode* prev = nullptr;
15        ListNode* curr = head;
16
17        while (curr != nullptr) {
18            ListNode* next = curr->next;
19            curr->next = prev;
20            prev = curr;
21            curr = next;
22        }
23
24        return prev;
25    }
26
27    ListNode* removeNodes(ListNode* head) {
28
29        // 1. Reverse the linked list
30        head = reverseList(head);
31
32        // 2. Keep track of maximum value
33        int maxValue = head->val;
34
35        ListNode* curr = head;
36
37        while (curr != nullptr && curr->next != nullptr) {
38
39            if (curr->next->val < maxValue) {
40                // Remove next node
41                curr->next = curr->next->next;
42            }
43            else {
44                // Keep the node
45                curr = curr->next;
46                maxValue = curr->val;
47            }
48        }
49
50        // 3. Reverse again
51        head = reverseList(head);
52
53        return head;
54    }
55};