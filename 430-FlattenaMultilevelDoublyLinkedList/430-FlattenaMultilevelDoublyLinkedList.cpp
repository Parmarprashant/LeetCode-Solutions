// Last updated: 17/08/2026, 14:34:03
1/*
2// Definition for a Node.
3class Node {
4public:
5    int val;
6    Node* prev;
7    Node* next;
8    Node* child;
9};
10*/
11
12/*
13// Definition for a Node.
14class Node {
15public:
16    int val;
17    Node* prev;
18    Node* next;
19    Node* child;
20};
21*/
22
23class Solution {
24public:
25    Node* dfs(Node* head) {
26        Node* curr = head;
27        Node* last = head;
28
29        while (curr) {
30            Node* nextNode = curr->next;
31
32            if (curr->child) {
33                Node* childHead = curr->child;
34                Node* childTail = dfs(childHead);
35
36                // Connect current node with child
37                curr->next = childHead;
38                childHead->prev = curr;
39
40                // Connect child's tail with original next
41                if (nextNode) {
42                    childTail->next = nextNode;
43                    nextNode->prev = childTail;
44                }
45
46                curr->child = nullptr;
47                last = childTail;
48            } else {
49                last = curr;
50            }
51
52            curr = nextNode;
53        }
54
55        return last;
56    }
57
58    Node* flatten(Node* head) {
59        if (!head) return nullptr;
60        dfs(head);
61        return head;
62    }
63};