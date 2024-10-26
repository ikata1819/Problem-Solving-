#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define S string
#define V vector
#define Us unordered_set
#define Um unordered_map

int main()
{
    int x,y,z,n;
    float per,done;
    cin>>x>>y>>z>>n;
    int a[14]= {0};
    done=(x-z)*y;
    per=ceil(x*y*60/100.00);
    if(done<(per-n))
    {
        cout<<"No\n";
    }
    else
    {
        cout<<"Yes\n";
        done=per-n;
        int i;
        for( i=0; i<(x-z); i++)
        {
            if(done>=y)
            {
                a[i]=y;
            }
            else
                break;
            done-=y;
        }
        if(done>0)
        a[i]=done;
        for(int i=(x-z-1); i>=0; i--)
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
