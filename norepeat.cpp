#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
   set <string> s;
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
    string ss;
    cin>>ss;
    s.insert(ss);
   }
   for(auto it : s){
    cout<<it<<endl;
   }

   }
return 0;
}
