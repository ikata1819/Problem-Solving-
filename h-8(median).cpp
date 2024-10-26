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

void MergeSort(vector<int> &A,int l, int r)
{


    if(l>=r) return;
    int mid = (l+r)/2;
    int B[r-l+1];
    /// Divide
    MergeSort(A,l,mid);

    MergeSort(A,mid+1,r);


    int i=l, j=mid+1,k=0;
    while (i <= mid && j <= r)
    {
        if (A[i] < A[j])
        {
            B[k++] = A[i++];
        }
        else
        {
            B[k++] = A[j++];
        }
    }

    while (i <= mid)
    {
        B[k++] = A[i++];
    }

    while (j <= r)
    {
        B[k++] = A[j++];
    }
    for (int i = 0; i < k; ++i)
    {
        A[l + i] = B[i];
    }

    return ;
}
void solve()
{

    int n,med,len;
    vi a;
    while(scanf("%ld",&n)==1)
    {
        if(n==0)
            break;
        a.pb(n);
        med=0;
        len=a.size();
        MergeSort(a,0,len-1);
        if(len%2==0){
            med=(a[len/2]+a[len/2-1])/2;
        }
        else{
             med=a[len/2];
        }
        cout<<med<<nl;
    }


}

signed main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
