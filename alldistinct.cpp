#include <bits/stdc++.h>
using namespace std;

int  main ()
{
    int t,n,c;

    cin>>t;
    while(t--)
    {
       c=0;
        cin>>n;

        int a[n+5];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
        if(a[i]!=a[i+1])
            c++;
    }
    while(n>c){
        n-=2;
    }
    if(n<0)
        n=1;
    cout<<"ans"<<n<<" "<<c<<endl;
    }
    return 0;
}
