#include <bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
   long long a[3];
   for(int i=0;i<3;i++){
   cin>>a[i];}
   sort(a,a+3);
   int x=(a[1]/a[0]);
   int y=(a[2]/a[0]);
   if((x+y)<=5 &&(a[1]%a[0])==0 && (a[2]%a[0])==0)
   cout<<"YES"<<endl;
   else
   cout<<"NO"<<endl;
   }
    return 0;
}
