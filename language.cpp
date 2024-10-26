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
        int n;
        cin>>n;
        char s[n+5];
        string ans;
        cin>>s;

        for(int i=0; i<n; i++)
        {
             ans+=s[i];
            if(s[i]=='a' || s[i]=='e')
            {

                if((s[i+1]=='c' ||s[i+1]=='b'||s[i+1]=='d') && (s[i+2]== 'a' || s[i+2]=='e'))

                    ans+='.';

                else if((s[i+1]=='c' ||s[i+1]=='b'||s[i+1]=='d')&&( s[i+2]=='c' ||s[i+2]=='b'||s[i+2]=='d'))
                {
                    ans+=s[i+1];
                    ans+='.';
                    i++;
                }
            }




        }
        cout<<ans<<endl;
    }

    return 0;
}
