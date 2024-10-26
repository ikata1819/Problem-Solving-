#include <bits/stdc++.h>
using namespace std;

int  main ()
{
    int t,l,r,f;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;

        f=0;
        for(int i=1;i<=r;i++){
            for(int j=r-1;j>=i;j--){
            int g=__gcd(i,j);

            if((i+j)>=l && (i+j)<=r && g!=1)
            {
                f=1;
                cout<<i<<" "<<j<<endl;
                break;
            }
        }
        if(f==1)
            break;
        }
        if(f==0)
            cout<<"-1"<<endl;
    }
    return 0;
}
