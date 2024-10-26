#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;
    cout << "Enter temperature in degrees Celsius: ";
    cin >> celsius;
    fahrenheit = celsius * 9.0 / 5.0 + 32.0;
    cout << "Temperature in degrees Fahrenheit: " << fahrenheit << endl;
    return 0;
}
