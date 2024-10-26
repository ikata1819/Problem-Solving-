#include<bits/stdc++.h>
using namespace std;


int main() {

   map <string,int> m;
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
    string s;
    cin>>s;
    m[s]++;
   }
   int c=0;
  for(auto it : m){
    if(it.second==2)
        c++;
   }
   cout<<c<<endl;
return 0;
}
