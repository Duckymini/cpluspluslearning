/*
    Project 1-2
    This program displays a conversion table of feet to meters.
    Call this program FtoMtable.cpp
*/
#include <iostream>
using namespace std;

int main()
{
    int counter;
    double feet;
    counter = 0;

    for(feet = 1.0; feet <= 100.0; feet++)
    {
        counter++;
        cout << feet << " is " << feet / 3.28 << " meters.\n";
        if(counter == 25 )
        {
            cout << "\n";
            counter = 0;
        }
    }
    return 0;
}