#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double principal, rate, amount;
    int years;

    cout << "Enter initial amount: ";
    cin >> principal;

    cout << "Enter number of years: ";
    cin >> years;

    cout << "Enter interest rate (percent per year): ";
    cin >> rate;

    rate /= 100.0;

    for (int i = 1; i <= years; ++i) {
        amount = principal +(principal*rate);
        principal=amount;
    }

    cout << "At the end of " << years << " years, you will have " << amount << " dollars." << endl;

    return 0;
}
