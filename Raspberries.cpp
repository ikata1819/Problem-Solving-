#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int dif=INT_MAX;
        int c[11]= {0};
        int n,k;
        cin>>n>>k;
        int ar[n+5];
        for(int i=0; i<n; i++)
            cin>>ar[i];
        long long product=1;
        for(int i=0; i<n; i++)
        {
            c[ar[i]]++;
            product*=ar[i];
        }

        if(c[k]>0 || product%k==0)
        {
            dif=0;
        }
        else
        {
            for(int i=1; i<=10; i++)
            {
                if(c[i]!=0)
                {
                    if( i%k==0)
                    {

                        break;
                    }
                    else
                    {
                        if((i-k)<dif && (i-k)>0)
                            dif=(i-k);
                    }
                }
            }
        }
        if(k==4)
        {
            if(product%2==0 && c[1]>=1)
                dif=1;
            else if(c[1]>=2)
                dif=2;
        }

        printf("dif=%d pro=%d\n",dif,product);
    }



    return 0;
}
