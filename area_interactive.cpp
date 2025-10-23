#include <iostream>
using namespace std;

int main() 
{
    int length, width, area;
    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the width: ";
    cin >> width;

    area = length * width;

    cout << "The area is: ";
    cout << area;

    return 0;
}