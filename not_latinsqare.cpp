#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define S string
#define V vector
#define Us unordered_set
#define Um unordered_map



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char s[4][4];
        int a=0,b=0,c=0;
        for(int i=0; i<3; i++)
        {
            cin>>s[i];
        }
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                if(s[i][j]=='A')
                    a++;
                if(s[i][j]=='B')
                    b++;
                    if(s[i][j]=='C')
                    c++;
            }
        }
        if(a<3)
            cout<<"A\n";
        if(b<3)
            cout<<"B\n";
        if(c<3)
            cout<<"C\n";

    }
    return 0;
}
