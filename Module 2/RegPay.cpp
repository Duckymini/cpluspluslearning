#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double Principal, IntRate, PayPerYear, NumYears, Payment, numer, denom, b, e;
    cout << "Enter principal: ";
    cin >> Principal;
    cout << "Enter interest rate (i.e., 0.075): ";
    cin >> IntRate;
    cout << "Enter number of payments per year: ";
    cin >> PayPerYear;
    cout << "Enter number of years: ";
    cin >> NumYears;

    numer = IntRate * Principal / PayPerYear;
    e = -(PayPerYear * NumYears);
    b = (IntRate / PayPerYear) + 1;
    denom = 1 - pow(b, e);

    Payment = numer / denom;

    cout << "The payment is " << Payment;

    return 0;
}