/*
Project 1-1
This program converts feet to meters.
Call this program FtoM.cpp.
*/

#include <iostream>
using namespace std;

int main()
{
    double conversion_to_meters, feets;
    cout << "Enter feets: ";
    cin >> feets;
    cout << feets << " feets is " << feets / 3.28 << " meters.";
    return 0;
}