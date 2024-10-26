#include <bits/stdc++.h>
using namespace std;




int  main ()
{
    int n,i,c=0;
    cin>>n;
    long long  a[n+10];
    for(i=0;i<n;i++){
        cin>> a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++){
        if(a[i]!=a[i+1])
            c++;
    }
    cout<<c<<endl;
    return 0;
}

