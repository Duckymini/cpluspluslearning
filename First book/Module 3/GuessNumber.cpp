#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int magic = rand();
    int guess;

    cout << "Enter your guess: ";
    cin >> guess;

    if(guess == magic) cout << "You guessed correctly";
    else
    {
        cout << "Wrong guess";
        if(guess < magic) cout << "Your guess is smaller than the magic number";
        else cout << "Your guess is greater than the magic number";
    }

    return 0;
}