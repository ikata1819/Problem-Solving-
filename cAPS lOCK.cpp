#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define S string
#define V vector
#define Us unordered_set
#define Um unordered_map


int main()
{
    string a;
    cin>>a;
    int f=0,ff=0;
    auto it =a.begin();
    int n=a.size();
    for(int i=1;i<n;i++){
       if(*(it+i)>='a' && *(it+i)<='z')
        f=1;
    }
    if(*it>='A' && *it<='Z')
        ff=1;
    if(f==0)
    {
        transform(a.begin(), a.end(), a.begin(), ::tolower);
        if(ff==0)
        *it=*it-32;
    }

    cout<<a;

    return 0;
}
