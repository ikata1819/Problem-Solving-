#include <bits/stdc++.h>
using namespace std;

int  main ()
{ int t,a,b,c,cc;
  cin>>t;
  while(t--){
    cin>>a>>b>>c;
    cc=0;
    float m=max(a,b);
    float half=(a+b)/2;
    while(m>half){
        m-=c;
        cc++;
    }
    cout << cc<<endl;
  }
    return 0;
}
