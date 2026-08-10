// Last updated: 10/08/2026, 07:59:09
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
13    ListNode* swapPairs(ListNode* head) {
14
15        ListNode* dummy = new ListNode(0);
16        dummy->next = head;
17
18        ListNode* prev = dummy;
19
20        while (prev->next != nullptr && prev->next->next != nullptr) {
21
22            ListNode* first = prev->next;
23            ListNode* second = first->next;
24
25            // Swap the nodes
26            first->next = second->next;
27            second->next = first;
28            prev->next = second;
29
30            // Move to the next pair
31            prev = first;
32        }
33
34        return dummy->next;
35    }
36};