// Last updated: 11/08/2026, 13:36:57
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
13    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
14        unordered_set<int> st(nums.begin(), nums.end());
15
16        
17        while (head && st.count(head->val)) {
18            head = head->next;
19        }
20
21        ListNode* curr = head;
22
23       
24        while (curr && curr->next) {
25            if (st.count(curr->next->val)) {
26                curr->next = curr->next->next;
27            } else {
28                curr = curr->next;
29            }
30        }
31
32        return head;
33    }
34};