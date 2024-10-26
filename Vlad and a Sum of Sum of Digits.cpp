#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define S string
#define V vector
#define Us unordered_set
#define Um unordered_map
#define len length

int digitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}



int main()
{
    int digsum[200005]={0};
    int prefix[200005]={0};
    for(int i=1;i<=200000;i++){
        digsum[i]=digitSum(i);
    }
    for(int i=1;i<=200000;i++){
        prefix[i]+=prefix[i-1]+digsum[i];
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<prefix[n]<<endl;

    }

    return 0;
}
