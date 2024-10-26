#include <iostream>

using namespace std;

void displayArray(int arr[], int size) {
    cout << "Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertElement(int arr[], int& size, int element, int position) {
    if (position < 0 || position > size) {
        cout << "Invalid position for insertion." << endl;
        return;
    }

    for (int i = size - 1; i >= position; --i) {
        arr[i + 1] = arr[i];
    }

    arr[position] = element;
    ++size;

    cout << "Element inserted successfully." << endl;
}

void deleteElement(int arr[], int& size, int position) {
    if (position < 0 || position >= size) {
        cout << "Invalid position for deletion." << endl;
        return;
    }

    for (int i = position; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    --size;

    cout << "Element deleted successfully." << endl;
}

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size = 0;

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Create Array\n";
        cout << "2. Insert Element\n";
        cout << "3. Delete Element\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Enter the size of the array: ";
                cin >> size;

                cout << "Enter elements for the array:\n";
                for (int i = 0; i < size; ++i) {
                    cin >> arr[i];
                }

                cout << "Array created successfully.\n";
                displayArray(arr, size);
                break;
            }

            case 2: {
                int element, position;
                cout << "Enter the element to insert: ";
                cin >> element;
                cout << "Enter the position to insert: ";
                cin >> position;

                insertElement(arr, size, element, position);
                displayArray(arr, size);
                break;
            }

            case 3: {
                int position;
                cout << "Enter the position to delete: ";
                cin >> position;

                deleteElement(arr, size, position);
                displayArray(arr, size);
                break;
            }

            case 4:
                cout << "Exiting the program.\n";
                break;

            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 4);

    return 0;
}
