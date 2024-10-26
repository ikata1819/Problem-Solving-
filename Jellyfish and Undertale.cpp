#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    long long a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n;
        long long ar[n];
        for(int i=0; i<n; i++)
            cin>>ar[i];
        long long sum=b;
        for(int i=0; i<n; i++)
        {


            if(ar[i]>=a)
                sum+=a-1;
            else
                sum+=ar[i];
            }

        cout<<sum<<endl;

    }
    return 0;
}
