// Last updated: 23/06/2026, 13:28:09
1class Solution {
2public:
3    int height(TreeNode* root) {
4        if (!root) return 0;
5
6        int left = height(root->left);
7        if (left == -1) return -1;
8
9        int right = height(root->right);
10        if (right == -1) return -1;
11
12        if (abs(left - right) > 1) return -1;
13
14        return max(left, right) + 1;
15    }
16
17    bool isBalanced(TreeNode* root) {
18        return height(root) != -1;
19    }
20};