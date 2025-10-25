/*
    Just a test file where I test limit cases of C++
*/
#include <iostream>
#include <thread>
using namespace std;


// void taskA() {
//     for(int i = 0; i < 10000000; ++i){} //task to slow down the execution of task A
//     cout << "Je fais la tâche A\n";
//     // testink junk value of a stack allocated to the first and second thread. It appears that they 
//     int j;
//     cout << j << "\n";
// }

// void taskB() {
//     for(int i = 0; i < 1000000; ++i){} //task to slow down the execution of task B
//     cout << "Je fais la tâche B\n";
//     int j;
//     cout << j << "\n";
// }


// //testing the value of a global variable -> always 0
// int i;


//testing consctution mechanism of object construction
// class Foo
// {
// public:
//     Foo() = default;
//     Foo(int a_, int b_, int c_) : a(a_), b(b_), c(c_) {}
//     int a;
//     int b;
//     int c;
// };


int main()
{
    // // testing the value of a local variable (in main()) -> random variable
    // // if we re-compile or re-run, it will keep the same value because the compiler will use the same stack (I think).
    // static int a;
    // int k;
    // int j;
    // cout << i << " " << a << " " << j << " " << k;
    // Foo f;
    // Foo f2(1, 2, 3);

    // //testing if we can execute both if and else control statement at the same time
    // bool test = true;
    // if(test){
    //     test = false;
    //     cout << "passed by here";
    // } else {
    //     cout << "passed also by here";
    // } // at no time, both if and else statement will be both executed (i think)

    // // testing parallel execution 
    // thread t1(taskA); 
    // thread t2(taskB);
    // t1.join();
    // t2.join();
    // int i;
    // cout << i << "\n";

    for(int i = 0; i < 4; i++) cout << i << "\n";
    cout << "\n";
    for(int i = 0; i < 4; ++i) cout << i << "\n";

    

    return 0;
}