#include <bits/stdc++.h>
using namespace std;


int bubbleSort(vector<int>& arr) {
    int n = arr.size();
    int ct=0;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = n-1; j >=i+1; j--) {
            if (arr[j] < arr[j - 1]){
                swap(arr[j], arr[j -1 ]);
                ct++;
                }
        }
    }
    return ct;
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
    int ct=bubbleSort(a);
   for(int i=0;i<n;i++)
    {
        if(i!=n-1)
    cout<<a[i]<<" ";
    else
        cout<<a[i]<<endl;
    }
    cout<<ct<<endl;

    return 0;
}
