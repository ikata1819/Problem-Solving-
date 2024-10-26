#include <bits/stdc++.h>
using namespace std;

int  main ()
{
  int t,a,b,n;
  cin>>t;
  while(t--){
    cin>>n;
    int a[n+5],b[n+5];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    int m=0,ind;
    for(int i=0;i<n;i++){
        if(a[i]<=10){
            if(b[i]>m){
                m=b[i];
                ind=i;
            }
        }
    }
    cout<<ind+1<<endl;
  }
      return 0;
}
