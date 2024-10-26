#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define forloop for(int i=0;i<n;i++)
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    forloop
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    int moves=0,div;
    div=sum%3;
    forloop
    {
        if(div==0)
            break;
        else if(arr[i]%3==div)
        {
            moves=1;
            break;
        }
        else if(div==2)
        {
            moves=1;
            break;
        }

        else
        {
            moves=2;
        }


    }
    cout<<moves<<endl;
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
