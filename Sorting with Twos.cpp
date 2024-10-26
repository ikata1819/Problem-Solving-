#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int tw[5];
    for(int i=1; i<=5; i++)
    {
        tw[i]=pow(2,i);
    }

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }

        int flag=0;
        for(int i=2; i<n; i++)
        {
            if((a[i]>a[i+1]))
            {
                for(int j=1; j<5; j++)
                {
                    if(i>tw[j] && i<tw[j+1])
                    {
                        flag=1;
                        break;
                    }
                }

            }
        }

        if(flag)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }

    return 0;
}
