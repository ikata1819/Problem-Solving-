#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define S string
#define V vector
#define Us unordered_set
#define Um unordered_map
#define len length
string text;


int main()
{

int t,a,b;
cin>>t;
while(t--){
a=b=0;
string s;
cin>>s;
for(int i=0;i<5;i++){
if(s[i]=='A')
a++;
else
b++;
}
if(a>b)
cout<<"A\n";
else
cout<<"B\n";
}
    return 0;
}
