#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define S string
#define vi vector<int>
#define V vector
#define usii unordered_set<int,int>
#define umii unordered_map<int,int>
#define um unordered_map
#define us unordered_set
#define bg begin()
#define ed end()
#define pb push_back
#define forloop for(int i=0;i<n;i++)

bool Sorted(const vector<int>& vec)
{
    if (vec.size() < 2)
    {
        return true; // If vector has fewer than two elements, it is considered sorted
    }
    for (size_t i = 0; i < vec.size() - 1; ++i)
    {
        if (vec[i] > vec[i + 1])
        {
            return false; // If any element is greater than the next one, vector is not sorted
        }
    }
    return true;
}



void solve()
{
    int n;
    cin>>n;
    vi a(n),b(n);

    forloop
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b.bg,b.ed);
    int moves=0;
    if(!Sorted(a)) // corrected condition
    {
        int maxi=*max_element(a.bg,a.ed);
        if(a[n-1]!=maxi)
            moves=maxi;
        else
        {
            int i;
           for( i=a.size()-1;i>=0;i--){
                if(b[i]!=a[i]){
                    moves=b[i];
                    break;
                }
            }
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
