#include<bits/stdc++.h>
using namespace std;

void findLargestAndSecondLargest(int arr[], int size, int &largest, int &secondLargest) {
    largest = secondLargest = INT_MIN;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
}

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 1) {
        cout << "Array size should be greater than 1 for finding the second largest element." << endl;
        return 1;
    }

    int arr[size];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int largest, secondLargest;

    findLargestAndSecondLargest(arr, size, largest, secondLargest);

    if (secondLargest == INT_MIN) {
        cout << "There is no second largest element in the array." << endl;
    } else {
        cout << "Largest Element: " << largest << endl;
        cout << "Second Largest Element: " << secondLargest << endl;
    }

    return 0;
}
