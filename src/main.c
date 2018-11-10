#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "function.h"


int main ()
{
    func_init();
    double runInstanceNumber = 0 ;
    while(1)
    {
        func1_sqrt();
        //func2_prime(runInstanceNumber+1);
        runInstanceNumber++;
    }
    return 0;
}
