#include <iostream>

using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to insert a new element at a specified position in the list
Node* addElementAtPosition(Node* head, int value, int position) {
    Node* newNode = new Node;
    newNode->data = value;

    if (position == 1) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* temp = head;
        for (int i = 1; i < position - 1 && temp != nullptr; ++i) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Invalid position. Element not added." << endl;
            delete newNode;
            return head;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    cout << "Element added successfully." << endl;
    return head;
}

// Function to delete an element from a specified position in the list
Node* deleteElementAtPosition(Node* head, int position) {
    if (head == nullptr) {
        cout << "List is empty. Cannot delete element." << endl;
        return head;
    }

    if (position == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Element deleted successfully." << endl;
        return head;
    } else {
        Node* current = head;
        Node* previous = nullptr;

        for (int i = 1; i < position && current != nullptr; ++i) {
            previous = current;
            current = current->next;
        }

        if (current == nullptr) {
            cout << "Invalid position. Element not deleted." << endl;
            return head;
        }

        previous->next = current->next;
        delete current;
        cout << "Element deleted successfully." << endl;
        return head;
    }
}

// Function to insert a new element at the end of the list
Node* addElement(Node* head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    cout << "Element added successfully." << endl;
    return head;
}

// Function to delete an element from the list
Node* deleteElement(Node* head, int value) {
    if (head == nullptr) {
        cout << "List is empty. Cannot delete element." << endl;
        return head;
    }

    Node* current = head;
    Node* previous = nullptr;

    // Check if the element is in the head node
    if (current->data == value) {
        head = current->next;
        delete current;
        cout << "Element deleted successfully." << endl;
        return head;
    }

    // Traverse the list to find the element
    while (current != nullptr && current->data != value) {
        previous = current;
        current = current->next;
    }

    // Element not found
    if (current == nullptr) {
        cout << "Element not found in the list." << endl;
    } else {
        previous->next = current->next;
        delete current;
        cout << "Element deleted successfully." << endl;
    }

    return head;
}

// Function to search for an element in the list
void searchElement(Node* head, int value) {
    Node* temp = head;
    int position = 1;
    while (temp != nullptr) {
        if (temp->data == value) {
            cout << "Element found at position " << position << "." << endl;
            return;
        }
        temp = temp->next;
        position++;
    }

    cout << "Element not found in the list." << endl;
}

// Function to display the linked list
void displayList(Node* head) {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = head;
    cout << "Linked List: ";
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to create a new linked list
Node* createList() {
    int n, value;
    Node* head = nullptr;

    cout << "Enter the number of elements in the linked list: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> value;
        head = addElement(head, value);
    }

    return head;
}

int main() {
    Node* head = nullptr;
    int choice, value, position;

    do {
        cout << "\nMenu:\n";
        cout << "1. Create Linked List\n";
        cout << "2. Add Element\n";
        cout << "3. Add Element at Position\n";
        cout << "4. Delete Element\n";
        cout << "5. Delete Element from Position\n";
        cout << "6. Search Element\n";
        cout << "7. Display List\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (head != nullptr) {
                    cout << "A linked list already exists. Creating a new one will overwrite the existing list.\n";
                }
                head = createList();
                displayList(head);
                break;
            case 2:
                if (head == nullptr) {
                    cout << "Linked list does not exist. Please create one first.\n";
                } else {
                    cout << "Enter the element to add: ";
                    cin >> value;
                    head = addElement(head, value);
                    displayList(head);
                }
                break;
            case 3:
                if (head == nullptr) {
                    cout << "Linked list does not exist. Please create one first.\n";
                } else {
                    cout << "Enter the element to add: ";
                    cin >> value;
                    cout << "Enter the position to add the element: ";
                    cin >> position;
                    head = addElementAtPosition(head, value, position);
                    displayList(head);
                }
                break;
            case 4:
                if (head == nullptr) {
                    cout << "Linked list does not exist. Please create one first.\n";
                } else {
                    cout << "Enter the element to delete: ";
                    cin >> value;
                    head = deleteElement(head, value);
                    displayList(head);
                }
                break;
            case 5:
                if (head == nullptr) {
                    cout << "Linked list does not exist. Please create one first.\n";
                } else {
                    cout << "Enter the position to delete the element: ";
                    cin >> position;
                    head = deleteElementAtPosition(head, position);
                    displayList(head);
                }
                break;
            case 6:
                if (head == nullptr) {
                    cout << "Linked list does not exist. Please create one first.\n";
                } else {
                    cout << "Enter the element to search: ";
                    cin >> value;
                    searchElement(head, value);
                }
                break;
            case 7:
                displayList(head);
                break;
            case 8:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }

    } while (choice != 8);

    Node* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
