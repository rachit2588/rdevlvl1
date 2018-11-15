#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "function.h"


int main ()
{
    func_init();
    double runInstanceNumber = 1;
    while(1)
    {
        func3_factorial( func1_sqrt(runInstanceNumber));
        func2_prime(runInstanceNumber);
        runInstanceNumber++;
    }
    
    return 0;
}
