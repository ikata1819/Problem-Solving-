#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define S string
#define V vector
#define Us unordered_set
#define Um unordered_map



int main()
{
     int t;
     cin>>t;
     while(t--){
            int a,b,c,x;
            cin>>a>>b>>c;
            if(a==b)
                x=c;
            if(b==c)
                x=a;
            if(a==c)
                x=b;
            cout<<x<<endl;
     }
    return 0;
}
