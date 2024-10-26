#include<bits/stdc++.h>
using namespace std;
int CalculateDigitSum(long long number) {
    int sum = 0;


    while (number != 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    return sum;
}
int main() {
    int t;
    cin>>t;
    while(t--){
            long long x;
            int k;
            cin>>x>>k;
            int sum=CalculateDigitSum(x);
            while(sum%k!=0){
                x++;
                sum=CalculateDigitSum(x);
            }
            cout<<x<<endl;
    }
    return 0;
}
