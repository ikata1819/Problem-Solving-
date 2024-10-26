#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define S string
#define vi vector<int>
#define Us unordered_set
#define Um unordered_map

void solve()
{
int n;
cin>>n;
vi a;
for(int i=0;i<n;i++){
int x;
cin>>x;
a.push_back(x);
}
int c=-1,count=0;
for(int i=0;i<n;i++){
if(a[i]==1)
    c=0;
if(c==0 && a[i]==0)
    count++;
}
int z=0;
for(int i=n-1;i>=0;i--){
if(a[i]==0)
    z++;
if(a[i]==1)
    break;
}
cout<<count-z<<endl;
}

signed main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
/* for(int i=0;i<n;i++){

}
*/
