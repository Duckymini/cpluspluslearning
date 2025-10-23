#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    double value1, value2, value3, value4, value5, counter;
    cout << "Enter value 1: ";
    cin >> value1;
    cout << "Enter value 2: ";
    cin >> value2;
    cout << "Enter value 3: ";
    cin >> value3;
    cout << "Enter value 4: ";
    cin >> value4;
    cout << "Enter value 5: ";
    cin >> value5;
    cout << "The mean of the absolute values you entered is: " << (abs(value1)+abs(value2)+abs(value3)+abs(value4)+abs(value5)) / 5;

    return 0;
}