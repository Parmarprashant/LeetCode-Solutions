// Last updated: 04/06/2026, 11:46:49
1class Solution {
2public:
3    int evalRPN(vector<string>& tokens) {
4        stack<int> st;
5
6        for (string &t : tokens) {
7            if (t == "+" || t == "-" || t == "*" || t == "/") {
8                int b = st.top();
9                 st.pop();
10                int a = st.top(); 
11                st.pop();
12
13                if (t == "+") st.push(a + b);
14                else if (t == "-") st.push(a - b);
15                else if (t == "*") st.push(a * b);
16                else st.push(a / b);  
17            } 
18            else {
19                st.push(stoi(t));
20            }
21        }
22
23        return st.top();
24    }
25};