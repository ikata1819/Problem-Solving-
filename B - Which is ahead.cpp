#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define S string
#define Vi vector<int>
#define Us unordered_set
#define umii unordered_map<int,int>
#define len length
string text;
void solve(){
int n;
cin>>n;
umii v;
for(int i=0;i<n;i++){
int x;
cin>>x;
v[x]=i+1;
}

int q,a,b;
cin>>q;
while(q--){
    cin>>a>>b;
    if(v[a]>v[b])
        cout<<b<<endl;
    else
        cout<<a<<endl;
}
}

int main()
{
int t=1;
//cin>>t;
while(t--){
solve();
}

    return 0;
}
/* for(int i=0;i<n;i++){

}
*/
