#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int a[n+5];
     for(int i=0;i<n-1;i++){
        cin>>a[i];
        }
    int b[n+5];
    b[0]=(n-1)/2;
     for(int i=1;i<n;i++){
        b[i]=a[i-1]^b[i-1];
        }
        for(int i=0;i<n;i++){
       cout<<b[i]<<" ";
        }
    return 0;
}
