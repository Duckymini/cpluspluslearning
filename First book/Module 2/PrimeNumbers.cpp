/*
    Project 2-4
    Program that finds all of the prime numbers between 1 and 100
*/
#include <iostream>
using namespace std;

int main()
{
    short int potential_prime_number, potential_divisor;
    bool is_prime=true;
    cout << "2 is a prime number\n";
    for(potential_prime_number = 3; potential_prime_number <=100; potential_prime_number++)
    {
        for(potential_divisor = 2; potential_divisor < potential_prime_number; potential_divisor++)
        {
            if(potential_prime_number % potential_divisor == 0) is_prime = false; // Check if potential_prime_number is divisible by potential_divisor
        }
        if(is_prime) cout << potential_prime_number << " is a prime number\n";
        is_prime = true;
    }
    return 0;
}