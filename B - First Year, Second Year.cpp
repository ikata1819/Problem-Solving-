#include<bits/stdc++.h>
using namespace std;

vector<int> SieveOfEratosthenes(int n) {
    vector<bool> isPrime(n + 1, true);
    vector<int> primes;

    for (int p = 2; p * p <= n; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }

    for (int p = 2; p <= n; p++) {
        if (isPrime[p]) {
            primes.push_back(p);
        }
    }

    return primes;
}

int main() {
    int n;

    cin >> n;


    int limit = 8000000;
    vector<int> primes = SieveOfEratosthenes(limit);


        cout << primes[n - 1] << endl;

    return 0;
}
