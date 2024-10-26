#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    unsigned long n;
    cout << "\nEnter a number: ";
    cin >> n; //get number
    int dig=log10(n);
    for(int j=1; j<=200; j++)
    {
        cout << setw(5+dig) << j*n;
        if( j%10 == 0 )
            cout << endl;
    }
    return 0;
}
