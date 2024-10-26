#include <bits/stdc++.h>
using namespace std;

int  main ()
{
    int t,n,c;
    long long k;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n>>k;

        long long a[n+5];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+n+1);
        for(int i=1; i<=n; i++)
        {


            if(a[i+1]-a[i]>k)
            {
                if(i>n-i)
                    c+=n-i;
                else
                    c+=i;

            }


        }
        cout << c<<endl;
    }
    return 0;
}
