#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define S string
#define V vector
#define Us unordered_set
#define Um unordered_map

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i%2==0)
            {
                cout<<"R";
            }
            else{
                if(j%2==0)
                     cout<<"R";
                else
                    cout<<"W";
            }
        }
        cout<<endl;
    }


    return 0;
}
