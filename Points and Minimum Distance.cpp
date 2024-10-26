#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int a[(2*n)+5];
       for(int i=0;i<2*n;i++){
        cin>>a[i];
        }
        sort(a,a+(2*n));
        int b[n+5],c[n+5];
          for(int i=0;i<n;i++){
                b[i]=a[i];
                c[i]=a[i+n];
        }
        int ans=0;
        for(int i=0;i<n-1;i++){
               ans+=abs(b[i]-b[i+1]);
               ans+=abs(c[i]-c[i+1]);
        }
        cout<<ans<<endl;
        for(int i=0,j=n-1;i<n;i++,j--){
               cout<<b[i]<<" "<<c[j]<<endl;
        }
    }

    return 0;
}
