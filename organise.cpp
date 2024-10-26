#pragma once
#include<bits/stdc++.h>
using namespace std;

inline void title()
{
    cout << "\t\t*====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*\n";
    cout << "\t\t|              " << "               International SpaceStation Website"<< "                          |\n";
    cout << "\t\t*====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*====*\n\n\n\n";
}

char* stringToCharArray(const string& str)
{

    char* charArray = new char[str.length() + 1];
    strcpy(charArray, str.c_str());

    return charArray;
}
bool isINT(int value, int minRange, int maxRange) {
    // Check if value is an integer
    if (std::cin.fail()) {
        std::cin.clear(); // Clear the error state
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
        return false; // Value is not an integer
    }

    // Check if value falls within the specified range
    if (value < minRange || value > maxRange) {
        return false; // Value is outside the specified range
    }

    return true; // Value is an integer within the specified range
}


