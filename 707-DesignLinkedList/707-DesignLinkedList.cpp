// Last updated: 04/08/2026, 23:06:27
1class MyLinkedList {
2public:
3
4    class Node {
5    public:
6        int val;
7        Node* next;
8
9        Node(int val) {
10            this->val = val;
11            this->next = nullptr;
12        }
13    };
14
15    Node* head;
16    int size;
17
18    MyLinkedList() {
19        head = nullptr;
20        size = 0;
21    }
22    
23    int get(int index) {
24
25        if(index < 0 || index >= size)
26            return -1;
27
28        Node* temp = head;
29
30        for(int i = 0; i < index; i++) {
31            temp = temp->next;
32        }
33
34        return temp->val;
35    }
36    
37    void addAtHead(int val) {
38
39        Node* newNode = new Node(val);
40
41        newNode->next = head;
42        head = newNode;
43
44        size++;
45    }
46    
47    void addAtTail(int val) {
48
49        Node* newNode = new Node(val);
50
51        if(head == nullptr) {
52            head = newNode;
53            size++;
54            return;
55        }
56
57        Node* temp = head;
58
59        while(temp->next != nullptr) {
60            temp = temp->next;
61        }
62
63        temp->next = newNode;
64
65        size++;
66    }
67    
68    void addAtIndex(int index, int val) {
69
70        if(index < 0 || index > size)
71            return;
72
73        if(index == 0) {
74            addAtHead(val);
75            return;
76        }
77
78        if(index == size) {
79            addAtTail(val);
80            return;
81        }
82
83        Node* newNode = new Node(val);
84
85        Node* temp = head;
86
87        for(int i = 0; i < index-1; i++) {
88            temp = temp->next;
89        }
90
91        newNode->next = temp->next;
92        temp->next = newNode;
93
94        size++;
95    }
96    
97    void deleteAtIndex(int index) {
98
99        if(index < 0 || index >= size)
100            return;
101
102        if(index == 0) {
103
104            Node* temp = head;
105            head = head->next;
106
107            delete temp;
108
109            size--;
110            return;
111        }
112
113
114        Node* temp = head;
115
116        for(int i = 0; i < index-1; i++) {
117            temp = temp->next;
118        }
119
120
121        Node* deleteNode = temp->next;
122
123        temp->next = deleteNode->next;
124
125        delete deleteNode;
126
127        size--;
128    }
129};