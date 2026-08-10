// Last updated: 10/08/2026, 23:39:52
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
13    ListNode* partition(ListNode* head, int x) {
14
15        ListNode lessDummy(0);
16        ListNode greaterDummy(0);
17
18        ListNode* less = &lessDummy;
19        ListNode* greater = &greaterDummy;
20
21        while (head != nullptr) {
22
23            if (head->val < x) {
24                less->next = head;
25                less = less->next;
26            }
27            else {
28                greater->next = head;
29                greater = greater->next;
30            }
31
32            head = head->next;
33        }
34
35        // End the greater list
36        greater->next = nullptr;
37
38        // Connect both lists
39        less->next = greaterDummy.next;
40
41        return lessDummy.next;
42    }
43};