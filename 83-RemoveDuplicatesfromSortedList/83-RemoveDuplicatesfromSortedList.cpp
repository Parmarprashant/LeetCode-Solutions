// Last updated: 22/06/2026, 20:56:29
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
13    ListNode* deleteDuplicates(ListNode* head) {
14        ListNode* curr = head;
15
16        while(curr && curr->next){
17            if(curr->val == curr->next->val){
18                curr->next = curr->next->next;
19            }
20            else{
21                curr = curr->next;
22            }
23        }
24
25
26        return head;
27    }
28};