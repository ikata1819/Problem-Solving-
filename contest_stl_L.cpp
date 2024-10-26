#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define S string
#define V vector
#define Us unordered_set
#define Um unordered_map



int main()
{
    int time[11]= {0};
    for(int i=1; i<=10; i++)
        time[i]=i*5;
    for(int i=1; i<=10; i++)
        time[i]=time[i]+time[i-1];
    int n,k;
    cin>>n>>k;
    k=240-k;
    for(int i=1; i<=10; i++)
    {
        if(time[i]>k)
        {
            k=i-1;
            break;
        }
    }
if(k>n)
    cout<<n;
else
    cout<<k;
        return 0;
    }
