#include <iostream>
using namespace std;

int main()
{
    float distance, speed_of_light, duration;
    distance = 34000000;
    speed_of_light = 186000;
    cout << "To talk to someone on Mars, the signal will travel during "<< distance/speed_of_light << "\b\b seconds, which is "<< distance/speed_of_light / 60 << "\b\b minutes.";

    return 0;
}
