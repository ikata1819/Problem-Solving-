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
int decimalToBinary(int n)
{
    int binaryNumber = 0;
    int remainder, i = 1;
    while (n != 0)
    {
        remainder = n % 2;
        n /= 2;
        binaryNumber += remainder * i;
        i *= 10;
    }
    return binaryNumber;
}
bool isBinary(int num) {
    string binaryString = to_string(num);
    for (char c : binaryString) {
        if (c != '0' && c != '1') {
            return false;
        }
    }
    return true;
}
void solve()
{
    int n;
    cin>>n;
    if(isBinary(n)){
        yes;
        return;
    }
    vi binary;
    for(int i=0; i<35; i++)
    {
        binary.pb(decimalToBinary(i));
    }
    int num=n;
    int i=2,f=1;
    while(binary[i]<=num && num>0)
    {
        if(num%binary[i]!=0)
        {
            i++;
        }
        else
            num/=binary[i];
    }
    if(num==1)

        yes;

        else
            no;
//cout<<num<<nl;

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
