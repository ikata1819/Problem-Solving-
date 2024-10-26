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
#define nl '\n'
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
void solve()
{
    int n;
    cin>>n;
    vi atA(n), defA(n), atP(n), defP(n);
    int aa=0, da=0, ap=0, dp=0;
    forloop{
      cin>>atA[i];
      aa+=atA[i];
    }
     forloop{
      cin>>defA[i];
      da+=defA[i];
    }
     forloop{
      cin>>atP[i];
      ap+=atP[i];
    }
     forloop{
      cin>>defP[i];
      dp+=defP[i];
    }

    if(aa>ap && da>dp)
        cout<<"A\n";
    else if(aa<ap && da<dp)
    cout<< "P\n";
    else
        cout<<"DRAW\n";


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
