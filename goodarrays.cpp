#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,f,c,ff;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
         for(int i=0;i<n;i++){
            if(a[i]==1)
              c++;
         }
         f=n-c;
         //cout<<"c="<<c<<"f= "<<f<<endl;
         if(f>=c&& n!=1)
            cout<<"YES"<<endl;

         else
            cout<<"NO"<<endl;
    }

}
