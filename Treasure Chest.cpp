#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,k,res;
        cin>>x>>y>>k;
        if(x>y)
            res=x;
        else
        {
            if((y-x)<=k)
                res=y;
            else
                res=y+abs(x+k-y);
        }
        cout<<res<<endl;
    }

    return 0;
}
