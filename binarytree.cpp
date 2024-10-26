#include <iostream>
#include <stack>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

Node* insertNode() {
    cout << "Enter data for the node (enter -1 for NULL): ";
    int data;
    cin >> data;

    if (data == -1) {
        return nullptr;
    }

    Node* newNode = new Node(data);

    cout << "Enter left child of " << data << ":\n";
    newNode->left = insertNode();

    cout << "Enter right child of " << data << ":\n";
    newNode->right = insertNode();

    return newNode;
}

void inorderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }

    stack<Node*> s;
    Node* current = root;

    while (current != nullptr || !s.empty()) {
        while (current != nullptr) {
            s.push(current);
            current = current->left;
        }

        current = s.top();
        s.pop();

        cout << current->data << " ";

        current = current->right;
    }
}

int main() {
    Node* root = nullptr;

    while (true) {
        cout << "Enter your choice\n";
        cout << "Press 1 to make a binary tree\n"
             << "Press 2 to do Inorder Traversing\n"
             << "Press 3 to exit\n";

        int opt;
        cin >> opt;

        switch (opt) {
            case 1:
                cout << "Create Binary Tree:\n";
                root = insertNode();
                break;

            case 2:
                if (root != nullptr) {
                    cout << "\nInorder Traversal using Stack:\n";
                    inorderTraversal(root);
                    cout << "\n";
                } else {
                    cout << "Binary tree not created yet. Create a tree first.\n";
                }
                break;

            case 3:
                cout << "Exiting the program.\n";
                return 0;

            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }
    }

    return 0;
}
