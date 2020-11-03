#include <iostream>
#include "filters.h"
using namespace std;

int main()
{
    movingAverage mean1;
    mean1.numberOfSamples = 3;
    if(mean1.initialize())
    {
        cout << "Successfully initialized!" << endl;
    }
    mean1.mean(1);
    cout << mean1.mean(0) << endl;
    cout << mean1.mean(2) << endl;
    return 0;
}