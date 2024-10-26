#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};

Node* createNode(int data)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}
bool search(Node* head, int data)
{
    Node* temp = head;
    while (temp != nullptr)
    {
        if (temp->data == data)
        {
            cout << "Element found in the list." << endl;
            return true;
        }
        temp = temp->next;
    }
    cout << "Element not found in the list." << endl;
    return false;
}
Node* insert(Node* head, int data, int position)
{
    Node* newNode = createNode(data);

    if (position == 1 || head == nullptr)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }

    Node* temp = head;
    int count = 1;
    while (count < position - 1 && temp != nullptr)
    {
        temp = temp->next;
        count++;
    }

    if (temp == nullptr)
    {
        return head;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

Node* remove(Node* head, int position)
{
    if (head == nullptr)
    {
        return head;
    }

    Node* temp = head;

    if (position == 1)
    {
        head = temp->next;
        delete temp;
        return head;
    }

    int count = 1;
    Node* prev = nullptr;

    while (temp != nullptr && count < position)
    {
        prev = temp;
        temp = temp->next;
        count++;
    }

    if (temp == nullptr)
    {
        return head;
    }

    prev->next = temp->next;
    delete temp;

    return head;
}

void display(Node* head)
{
    Node* temp = head;
    if (temp == nullptr)
    {
        cout << "List is empty." << endl;
        return;
    }
    cout << "Linked List: ";
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main()
{
    Node* head = nullptr;
    int choice, data, position;

    do
    {
        cout << "\nLinked List Operations: " << endl;
        cout << "1. Create List" << endl;
        cout << "2. Search Element" << endl;
        cout << "3. Insert Element" << endl;
        cout << "4. Delete Element" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (head != nullptr)
            {
                Node* temp = head;
                while (temp != nullptr)
                {
                    Node* toDelete = temp;
                    temp = temp->next;
                    delete toDelete;
                }
                head = nullptr;
            }
            int n;
            cout << "Enter the number of elements: ";
            cin >> n;
            cout << "Enter " << n << " elements: ";
            for (int i = 0; i < n; ++i)
            {
                cin >> data;
                head = insert(head, data, i + 1);
            }
            display(head);
            break;

        case 2:
            cout << "Enter element to search: ";
            cin >> data;
            search(head, data);
            display(head);
            break;

        case 3:
            cout << "Enter element to insert: ";
            cin >> data;
            cout << "Enter position to insert: ";
            cin >> position;
            while(position<0)
            {
                cout<<"Invalid position"<<endl;
                cout << "Enter position to insert: ";
                cin >> position;
            }
            head = insert(head, data, position);
            display(head);
            break;

        case 4:
            cout << "Enter position to delete: ";
            cin >> position;
            while(position<0)
            {
                cout<<"Invalid position"<<endl;
                cout << "Enter position to insert: ";
                cin >> position;
            }
            head = remove(head, position);
            display(head);
            break;

        case 5:
            cout << "Exiting the program. Goodbye!" << endl;
            break;

        default:
            cout << "Invalid choice. Please enter a valid choice." << endl;
        }
    }
    while (choice != 5);

    return 0;
}
