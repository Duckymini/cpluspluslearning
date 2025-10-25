#include <iostream>
using namespace std;

int main()
{
    int counter;
    double pounds;
    counter = 0;

    for(pounds = 1.0; pounds <= 100.0; pounds++)
    {
        counter++;
        cout << pounds << " pounds on earth are " << pounds * 0.17 << " pounds on the moon.\n";
        if(counter == 25 )
        {
            cout << "\n";
            counter = 0;
        }
    }
    return 0;
}
