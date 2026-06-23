 #include <iostream>
 using namespace std;

// class Stack {
//     int arr[100];
//     int top;

// public:
//     Stack() {
//         top = -1;
//     }

//     void push(int x) {
//         if (top == 99) {
//             cout << "Stack Overflow\n";
//             return;
//         }
//         arr[++top] = x;
//     }

//     void pop() {
//         if (top == -1) {
//             cout << "Stack Underflow\n";
//             return;
//         }
//         top--;
//     }

//     void peek() {
//         if (top == -1) {
//             cout << "Stack is Empty\n";
//             return;
//         }
//         cout << "Top Element: " << arr[top] << endl;
//     }

//     void display() {
//         if (top == -1) {
//             cout << "Stack is Empty\n";
//             return;
//         }

//         for (int i = top; i >= 0; i--) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main() {
//     Stack s;

//     s.push(10);
//     s.push(20);
//     s.push(30);

//     s.display();

//     s.peek();

//     s.pop();

//     s.display();

//     return 0;
// }
//..........................................

 
#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void levelOrder(Node* root) {

    if(root == NULL)
        return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()) {

        Node* current = q.front();
        q.pop();

        cout << current->data << " ";

        if(current->left != NULL)
            q.push(current->left);

        if(current->right != NULL)
            q.push(current->right);
    }
}

int main() {

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Level Order Traversal: ";
    levelOrder(root);

    return 0;
}