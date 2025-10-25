/*
    Just a test file where I test limit cases of C++
*/
#include <iostream>
using namespace std;

//testing the value of a global variable -> always 0
int i;


//testing consctution mechanism of object construction
class Foo
{
public:
    Foo() = default;
    Foo(int a_, int b_, int c_) : a(a_), b(b_), c(c_) {}
    int a;
    int b;
    int c;
};


int main()
{
    // testing the value of a local variable (in main()) -> random variable
    // if we re-compile or re-run, it will keep the same value because the compiler will use the same stack (I think).
    static int a;
    int k;
    int j;
    cout << i << " " << a << " " << j << " " << k;
    Foo f;
    Foo f2(1, 2, 3);
}