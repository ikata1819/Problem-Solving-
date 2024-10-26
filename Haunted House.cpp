#include<bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m,ll,rr,l,r,c=1;
        cin>>n>>m;
        cin>>l>>r;
        ll=l;
        rr=r;
         n--;
        while(n--){

            cin>>l>>r;
            cout<<"max "<<max(ll,l)<<" "<<min(rr,r)<<endl;
            if(max(ll,l)<= min(rr,r)){
                ll=max(ll,l);
                rr=min(rr,r);
                c++;
            }


        }
        cout<<c<<endl;

    }
    return 0;
}
