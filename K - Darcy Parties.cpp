#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define S string
#define V vector
#define Us unordered_set
#define Um unordered_map

int main()
{

        int n,sum=0,c=0;
        cin>>n;
        int a[n+5];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        sum=sum/n;
         for(int i=0; i<n; i++)
        {
            if(a[i]!=sum)
                c++;
        }
        cout<<c<<endl;


    return 0;
}
