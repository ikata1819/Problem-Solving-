#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define S string
#define Vi vector<int>
#define Us unordered_set
#define Um unordered_map
#define len length
string text;
void solve(){
string s;
cin>>s;
int n=s.length();
int a[27]={0};
for(int i=0;i<n;i++){
a[s[i]-'a'+1]++;
}

char ch;
for(int i=1;i<27;i++){
if (a[i]==1)
ch=i+96;
}
for(int i=0;i<n;i++){
if (s[i]==ch){
cout<<i+1;
break;
}

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
