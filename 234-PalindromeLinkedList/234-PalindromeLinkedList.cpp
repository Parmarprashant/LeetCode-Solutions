// Last updated: 05/08/2026, 13:16:43
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
13    bool isPalindrome(ListNode* head) {
14    vector<int> arr;
15
16ListNode* temp = head;
17
18while (temp != nullptr) {
19    arr.push_back(temp->val);
20    temp = temp->next;
21}
22
23int left = 0;
24    int right = arr.size() - 1;
25
26    while (left < right) {
27        if (arr[left] != arr[right]) {
28            return false;
29        }
30
31        left++;
32        right--;
33    }
34
35    return true;
36    }
37};