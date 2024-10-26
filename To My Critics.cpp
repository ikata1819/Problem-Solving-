#include <bits/stdc++.h>
using namespace std;

int  main ()
{
  int t,a,b,c;
  cin>>t;
  while(t--){
  cin>>a>>b>>c;
  if((a+b)>=10 || (a+c)>=10 || (b+c)>=10){
        cout<<"Yes"<<endl;
  }
  else
    cout<<"no"<<endl;
  }
      return 0;
}
