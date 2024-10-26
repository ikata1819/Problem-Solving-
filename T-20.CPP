#include <bits/stdc++.h>
using namespace std;



void print(vector<int> a){
    int n=a.size();
    for(int i=0;i<n;i++)
    {
        if(i!=n-1)
    cout<<a[i]<<" ";
    else
        cout<<a[i]<<endl;
    }
}
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
        print(arr);
    }
}
int main()
{

    int n;
    cin>>n;
   vector<int> a(n);
   for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    print(a);
    insertionSort(a);



    return 0;
}
