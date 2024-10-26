#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

void bubbleSort(vector<int>& arr)
{

    int n = arr.size();
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

void insertionSort(vector<int>& arr)
{
    int n = arr.size();
    for (int i = 1; i < n; ++i)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

void selectionSort(vector<int>& arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        if (minIndex != i)
            swap(arr[i], arr[minIndex]);
    }
}

void MergeSort(vector<int> &A,int l, int r)
{


    if(l>=r) return;
    int mid = (l+r)/2;
    int B[r-l+1];
    /// Divide
    MergeSort(A,l,mid);

    MergeSort(A,mid+1,r);


    int i=l, j=mid+1,k=0;
    while (i <= mid && j <= r)
    {
        if (A[i] < A[j])
        {
            B[k++] = A[i++];
        }
        else
        {
            B[k++] = A[j++];
        }
    }

    while (i <= mid)
    {
        B[k++] = A[i++];
    }

    while (j <= r)
    {
        B[k++] = A[j++];
    }
    for (int i = 0; i < k; ++i)
    {
        A[l + i] = B[i];
    }

    return ;
}

void Merge(vector<int> &A,int l, int mid, int r)
{
    int B[r-l+1];
    int i=l, j=mid+1,k=0;
    while (i <= mid && j <= r)
    {
        if (A[i] < A[j])
        {
            B[k++] = A[i++];
        }
        else
        {
            B[k++] = A[j++];
        }
    }

    while (i <= mid)
    {
        B[k++] = A[i++];
    }

    while (j <= r)
    {
        B[k++] = A[j++];
    }
    for (int i = 0; i < k; ++i)
    {
        A[l + i] = B[i];
    }

    return ;
}

void KMergeSort(vector<int> &A, int l, int r,int k)
{

    if (l < r)
    {
        int range = (r - l + 1) / k;
        int rem = (r - l + 1) % k;

        vector<int> mid(k);
        mid[0] = l-1;
        for (int i = 1; i < k; ++i)
        {
            mid[i] = mid[i - 1] + range +   (i <= rem ? 1 : 0);
        }

        for (int i = 0; i < k; ++i)
        {
            int left = mid[i]+1;
            int right = (i == k - 1) ? r : mid[i + 1] ;
            KMergeSort(A, left, right, k);
        }

        for (int i = 1; i < k; ++i)
        {
            Merge( A,l, mid[i - 1], mid[i] );
        }
        Merge( A,l, mid[k-1], r );
    }
}

void TMergeSort(vector<int> &A,int l, int r)
{
    if (l < r)
    {
        int range = r - l + 1;
        int mid1 = l + range / 3;
        int mid2 = l + 2 * range / 3;
        TMergeSort(A,l, mid1);
        TMergeSort(A,mid1 + 1, mid2);
        TMergeSort(A,mid2 + 1, r);
        Merge(A,l, mid1, mid2);
        Merge(A,l,mid2,r);
    }
}

void ttMergeSort(vector<int> &A,int l, int r)
{
    if (l < r)
    {
        int range = r - l + 1;
        int mid = l + range / 3;
        ttMergeSort(A,l, mid);
        ttMergeSort(A,mid + 1, r);
        Merge(A,l,mid,r);
    }
}

void RQuickSort(vector<int> &A, int l, int r)
{

    if(l>=r)return ;

    clock_t start = clock();
    srand(start);

    int lower = l;
    int upper = r;

    int p=lower + rand() % (upper - lower + 1);
    int L=l, R = r;

    while(l!=r)
    {

        if(p==l)
        {
            if(A[r]>=A[p])
                r--;
            else
            {
                swap(A[p],A[r]);
                p=r;
            }

        }

        else
        {
            if(A[l]<=A[p])
                l++;
            else
            {
                swap(A[p],A[l]);
                p=l;
            }

        }

    }

    RQuickSort(A,L,p-1);
    RQuickSort(A,p+1,R);


}


void QuickSort(vector<int> &A,int l, int r)
{

    if(l>=r)return ;


    int p=l;
    int L=l, R = r;

    while(l!=r)
    {

        if(p==l)
        {
            if(A[r]>=A[p])
                r--;
            else
            {
                swap(A[p],A[r]);
                p=r;
            }

        }

        else
        {
            if(A[l]<=A[p])
                l++;
            else
            {
                swap(A[p],A[l]);
                p=l;
            }

        }

    }

    QuickSort(A,L,p-1);
    QuickSort(A,p+1,R);


}

void heapify(vector <int> &a, int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;


    if (l < n && a[l] > a[largest])
        largest = l;

    if (r < n && a[r] > a[largest])
        largest = r;


    if (largest != i)
    {
        swap(a[i],a[largest]);


        heapify(a, n, largest);
    }
}


void heapSort(vector <int> &a, int n)
{


    for (int i = n / 2 - 1; i >= 0; i--)
    {

        heapify(a, n, i);
    }


    for (int i = n - 1; i > 0; i--)
    {

        swap (a[0],a[i]);


        heapify(a, i, 0);
    }
}

void print(vector<int> A)
{
    int n=A.size();
     cout<<endl;
     cout<<"\t\t-----Sorted Array-----\n";
     cout<<"\t\t";
    for (int i = 0; i < n; i++)
    {

        cout<<A[i]<<" ";

    }
   cout<<endl<<endl;

}
void title(){
    cout << "\t\t*====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*\n";
    cout << "\t\t|              " << "                   Array Sorter Application"<< "                                |\n";
    cout << "\t\t*====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*\n\n\n\n";
}

int input(vector<int> &arr){
    int n;
    cout << "\t\tEnter the number of elements in the array: ";
        cin >> n;
        cout << "\t\tEnter " << n << " elements:\n";
        for (int i = 0; i < n; i++)
        {
            int x;
            cout<<"\t\tElement "<<i+1<<": ";
            cin >> x;
            arr.push_back(x);
            cout<<endl;
        }
        return n;
}
int main()
{
    title();
    int  n,choice;


    do
    {


        vector<int> arr;

        system("cls");
        Sleep(200);
        title();
        cout << "\n\t\t____Choose a sorting algorithm:____\n\n";
        cout<<"\t\t----------------------------\n";
        cout << "\t\t1. Bubble Sort\n";
        cout<<"\t\t----------------------------\n";
        cout << "\t\t2. Selection Sort\n";
        cout<<"\t\t----------------------------\n";
        cout << "\t\t3. Insertion Sort\n";
        cout<<"\t\t----------------------------\n";
        cout << "\t\t4. Merge Sort\n";
        cout<<"\t\t----------------------------\n";
        cout << "\t\t5. Quick Sort\n";
        cout<<"\t\t----------------------------\n";
        cout << "\t\t6. Heap Sort\n";
        cout<<"\t\t----------------------------\n";
        cout << "\t\t0. Exit\n";
        cout<<"\t\t----------------------------\n\n";
        cout << "\t\tEnter your choice: ";
        cin >> choice;

        system("cls");
        Sleep(200);
        title();
        switch (choice)
        {
        case 1:
            cout<<"\t\t\t\t\t*************Bubble Sort*************\n\n";
            input(arr);
            bubbleSort(arr);
            print(arr);
            break;
        case 2:
             cout<<"\t\t\t\t\t*************Selection Sort*************\n\n";
            input(arr);
            selectionSort(arr);
            print(arr);
            break;
        case 3:
             cout<<"\t\t\t\t\t*************Insertion Sort*************\n\n";
            input(arr);
            insertionSort(arr);
            print(arr);
            break;
        case 4:
             cout<<"\t\t\t\t\t*************Merge Sort*************\n\n";
             n=input(arr);

            int op;
            cout << "\t\tChoose merge sort\n";
            cout << "\t\t1.2-Way Merge Sort\n";
            cout << "\t\t2.3-Way Merge Sort\n";
            cout << "\t\t3.k-Way Merge Sort\n";
            cout << "\t\t4.2/3-Way Merge Sort\n";

            cin>>op;
            switch(op)
            {
            case 1:
                MergeSort(arr,0,n-1);
                print(arr);
                break;
            case 3:
                int k;
                cout<<"Enter k\n";
                cin>>k;
                KMergeSort(arr,0,n-1,k);
                print(arr);
                break;
            case 2:
                TMergeSort(arr,0,n-1);
                print(arr);
                break;
            case 4:
                ttMergeSort(arr,0,n-1);
                print(arr);
                break;
            }

            break;
        case 5:
             cout<<"\t\t\t\t\t*************Quick Sort*************\n\n";
              n=input(arr);
            cout << "\t\tChoose Quick sort\n";
            cout << "\t\t1.Traditional quick sort\n";
            cout << "\t\t2.Randomized quick sort\n";
            cin>>op;
            switch(op)
            {
            case 1:
                QuickSort(arr,0,n-1);
                print(arr);
                break;
            case 2:
                RQuickSort(arr,0,n-1);
                print(arr);
                break;
            }
            break;
        case 6:
             cout<<"\t\t\t\t\t*************Heap Sort*************\n\n";
              n=input(arr);
            heapSort(arr,n);
            print(arr);
            break;
        case 0:
            cout<<"\t\tExiting.....Thank You for using our application\n";
            exit(0);
            break;
        default:
            cout << "\t\tInvalid choice! Please enter a number between 0 and 6.\n";
        }

        cout<<"\t\tPress 1 to continue and 0 to exit\n";
        cin>>choice;
        if(choice==0){
            cout<<"\t\tExiting.....Thank You for using our application\n";
        }
//        system("cls");
//        Sleep(200);
    }
    while (choice != 0);

    return 0;
}

