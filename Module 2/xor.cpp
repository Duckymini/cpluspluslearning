/*
    Project 2-2
    Create an XORusing the C++logical operators
*/
#include <iostream>
using namespace std;

int main()
{
    bool b1=true, b2=false;
    bool result = (b1 || b2) && !(b1 && b2);
    cout << "p XOR q: "<< result;

    int x = 2000;
    char ch = 66;
    cout << "\n";
    cout << x<< ch;
    ch = x;
    cout << "\n";
    cout <<x<<ch;
}