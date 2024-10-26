#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define S string
#define vi vector<int>
#define V vector
#define usii unordered_set<int,int>
#define umii unordered_map<int,int>
#define um unordered_map
#define us unordered_set
#define bg begin()
#define ed end()
#define pb push_back
#define forloop for(int i=0;i<n;i++)
void solve(){
int n;
cin>>n;
int ans=0;
while(n>0){
ans+=n%2;
n=n/2;
}

cout<<ans;
}

signed main()
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
