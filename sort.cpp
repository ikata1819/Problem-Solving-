#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void merge(vector<int>& a, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; ++i)
        L[i] = a[left + i];
    for (int j = 0; j < n2; ++j)
        R[j] = a[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            ++i;
        } else {
            a[k] = R[j];
            ++j;
        }
        ++k;
    }

    while (i < n1) {
        a[k] = L[i];
        ++i;
        ++k;
    }

    while (j < n2) {
        a[k] = R[j];
        ++j;
        ++k;
    }
}

void mergesort(vector<int>& a, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergesort(a, left, mid);
        mergesort(a, mid + 1, right);
        merge(a, left, mid, right);
    }
}

// Selection Sort
void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        if (minIndex != i)
            swap(arr[i], arr[minIndex]);
    }
}

// Quick Sort
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; ++j) {
        if (arr[j] <= pivot) {
            ++i;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Bubble Sort
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

// Insertion Sort
void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6};

    // Selection Sort
    vector<int> selectionSortedArr = arr;
    selectionSort(selectionSortedArr);
    cout << "Selection Sort: ";
    for (int num : selectionSortedArr) {
        cout << num << " ";
    }
    cout << endl;

    // Quick Sort
    vector<int> quickSortedArr = arr;
    quickSort(quickSortedArr, 0, arr.size() - 1);
    cout << "Quick Sort: ";
    for (int num : quickSortedArr) {
        cout << num << " ";
    }
    cout << endl;

    // Bubble Sort
    vector<int> bubbleSortedArr = arr;
    bubbleSort(bubbleSortedArr);
    cout << "Bubble Sort: ";
    for (int num : bubbleSortedArr) {
        cout << num << " ";
    }
    cout << endl;

    // Insertion Sort
    vector<int> insertionSortedArr = arr;
    insertionSort(insertionSortedArr);
    cout << "Insertion Sort: ";
    for (int num : insertionSortedArr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
