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
    for(int i=1; i<=t; i++)
    {
        int n,c=0;
        cin>>n;
        double s[n+5];
        for(int j=0; j<n; j++)
        {

            cin>>s[j];

        }
        sort(s,s+n);
        for(int j=0; j<n; j++)
        {

            for(int k=j+1; k<n; k++)
            {

            int it=upper_bound(s,s+n,s[j]+s[k]-1)-s;
            it--;
            if(it>k)
                c+=it-k;

            }
        }
        cout<<"Case "<<i<<": "<<c<<endl;
    }

    return 0;
}

