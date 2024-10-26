#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    char input;
    cout << "Enter a letter: ";
    cin >> input;


    if (islower(input))
    {
        cout << "Nonzero: The entered letter is lowercase." << endl;
    }
    else
    {
        cout << "Zero: The entered letter is uppercase." << endl;
    }

    return 0;
}
