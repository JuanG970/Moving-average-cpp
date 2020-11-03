# Moving average in C++
The function moving average uses only standard library headers, also uses dynamic memory to allocate the correct size of the array to do the average.

## Usage of the function

Import the header
```c++
#import "filters.h"
```

Then, create a new instance of the filter and initialize it according to the number of samples required, assuming that all the samples start in 0.

```c++
movingAverage mean1;
mean1.numberOfSamples = 100;

mean1.initialize();
```

The function initialize could be used to test if the memory allocation is successful.
 ```c++
if(mean1.initialize())
{
    cout << "Successful initialization" << endl;
}
else
{
    cout<< "No memory remaining" << endl;
    return 0
}
 ```

 The function mean() will return the average of the data samples:

 ```c++
 cout << mean1.mean(1);
 ```

 See testMoving.cpp for a short implementation.