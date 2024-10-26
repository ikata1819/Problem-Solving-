#include<bits/stdc++.h>
using namespace std;
int dsum(int t)
{
    int   sum = 0, remainder;
    while (t != 0)
    {
        remainder = t % 10;
        sum       = sum + remainder;
        t         = t / 10;
    }
    return sum;
}
int main()
{

    int n;
    cin>>n;
    int a[n+5];
     for(int i=0;i<n;i++){
        cin>>a[i];
        sum[i]=dsum(a[i]);

        }
    return 0;
}
