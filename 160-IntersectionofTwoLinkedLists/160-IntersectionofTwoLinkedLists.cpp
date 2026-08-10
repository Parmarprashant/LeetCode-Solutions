// Last updated: 10/08/2026, 07:57:28
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
13    ListNode* rotateRight(ListNode* head, int k) {
14
15        if (head == nullptr || head->next == nullptr || k == 0)
16            return head;
17
18        // 1. Find length and last node
19        int n = 1;
20        ListNode* tail = head;
21
22        while (tail->next != nullptr) {
23            tail = tail->next;
24            n++;
25        }
26
27        // 2. Remove unnecessary rotations
28        k = k % n;
29
30        if (k == 0)
31            return head;
32
33        // 3. Make the list circular
34        tail->next = head;
35
36        // 4. Find the new tail
37        int steps = n - k;
38        ListNode* newTail = head;
39
40        for (int i = 1; i < steps; i++) {
41            newTail = newTail->next;
42        }
43
44        // 5. New head is after new tail
45        ListNode* newHead = newTail->next;
46
47        // 6. Break the circle
48        newTail->next = nullptr;
49
50        return newHead;
51    }
52};