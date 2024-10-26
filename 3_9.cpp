#include <iostream>
using namespace std;
int main() {
    int numGuests, numChairs, arrangements = 1;
    cout << "Enter the number of guests: ";
    cin >> numGuests;
    cout << "Enter the number of chairs: ";
    cin >> numChairs;
    for (int i = 0; i < numChairs; ++i) {
        arrangements *= (numGuests - i);
    }
    cout << "Number of possible arrangements: " << arrangements << endl;
    return 0;
}
