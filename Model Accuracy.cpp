#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define S string
#define V vector
#define Us unordered_set
#define Um unordered_map

int main()
{
   int n,k,c=0;
   cin>>n>>k;
   ll e,a;
   int i=n;
   while(i--){
   cin>>e>>a;
   if((abs(e-a))<=k)
   c++;
   }
   float ans=float( c)/n*(100.0);
   //float ans=8/12.0*100.0;
    //cout<<c<<endl;
   if((ans-floor(ans))>0.5)
   ans=ceil(ans);
   else
   ans=floor(ans);
   cout<<ans<<endl;
    return 0;
}
