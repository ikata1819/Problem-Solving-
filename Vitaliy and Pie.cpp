#include<bits/stdc++.h>
using namespace std;


int main()
{

    int n,ans=0;
    cin>>n;
    string s;
    cin>>s;

    map<char,int> m;
    for(int i=0; i<s.length(); i+=2)
    {
        if (s[i]-32!=s[i+1]){
            if((m[s[i+1]])>0)
            {
                m[s[i+1]]--;
                m[s[i]-32]++;

            }
            else{
            m[s[i]-32]++;
            ans++;
            }
    }
    }
    cout<<ans;
    return 0;
}
