// Last updated: 11/08/2026, 17:19:49
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
13    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
14        
15        // Find node just before index a
16        ListNode* beforeA = list1;
17        for (int i = 0; i < a - 1; i++) {
18            beforeA = beforeA->next;
19        }
20
21        // Find node at index b
22        ListNode* atB = list1;
23        for (int i = 0; i < b; i++) {
24            atB = atB->next;
25        }
26
27        // Connect before a to list2
28        beforeA->next = list2;
29
30        // Find last node of list2
31        while (list2->next != nullptr) {
32            list2 = list2->next;
33        }
34
35        // Connect last node of list2 to node after b
36        list2->next = atB->next;
37
38        return list1;
39    }
40};