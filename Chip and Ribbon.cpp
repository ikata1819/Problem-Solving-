#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define S string
#define V vector
#define Us unordered_set
#define Um unordered_map

int main()
{
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        ll c[n+5];

        for(int i=0; i<n; i++)
            cin>>c[i];
        ll cnt=c[0]-1;
        if(c[1]>c[0])
            cnt+=c[1]-c[0]-1;
         for(int i=1; i<n-1; i++){
            if(c[i+1]>c[i])
                cnt+=c[i+1]-c[i];
            else if(c[i+1]==c[i])
                cnt++;
         }
         if(n==1)
            cnt=c[0]-1;
         cout<<cnt<<endl;


    }

    return 0;
}

