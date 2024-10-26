#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define S string
#define V vector
#define Us unordered_set
#define Um unordered_map
#define len length
string text;


int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <string> a;
        int one[n]={0};
        for(int i=0; i<n; i++)
        {
            string s;
           cin>>s;
           a.push_back(s);
        }
        int c=0;
        for(int i=0; i<n; i++)
        {

            for(int j=0; j<n; j++)
            {
                if(a[i][j]=='1')
                one[i]++;
            }

        }
        for(int i=1; i<n; i++)
        {

            if (one[i]>0 && one[i-1]>0){
            if(one[i]!=one[i-1]){
            c=1;
            }
            }

        }
        if(c==0)
        cout<<"SQUARE\n";
        else
        cout<<"TRIANGLE\n";
    }

    return 0;
}
