#include <new>
#include <iostream>
using namespace std;
struct movingAverage
{
    private:
        float aux1, aux2;
        bool initializedQ = false;
    public:
    int numberOfSamples;
    float accumulative = 0;
    float * pointerToSamples;

    bool initialize()
    {
        if(!initializedQ)
        {
            pointerToSamples = new (nothrow) float [numberOfSamples];
            if (pointerToSamples == nullptr)
            {
                return false;
            }
            else
            {
                initializedQ = true;
            for (float * i = &pointerToSamples[0]; i != &pointerToSamples[numberOfSamples] ; ++i)
            {
                *i = 0;
            }
                return true;
            }
        }
    }

    float mean(float actualSample)
    {
        //First; move the data and append the new sample to the begining of the array
        accumulative = 0;
        accumulative += actualSample;
        for (float * i = &pointerToSamples[0]; i != &pointerToSamples[numberOfSamples] ; ++i)
        {
            accumulative += *i;
            *i = *(i+1);
        }
        *(pointerToSamples + numberOfSamples-1) = actualSample;
        return accumulative/numberOfSamples;
    }

    void printArray()
    {
        for (float * i = &pointerToSamples[0]; i != &pointerToSamples[numberOfSamples] ; ++i)
        {
            cout << *i << endl; 
        }
    }
};