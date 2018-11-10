//func1 - function struct to be def yet...

#include <stdio.h>
#include <math.h>
#include "function.h"
#include <time.h>
#include <stdlib.h>


void func_init()
{
    //any init required for functions goes here..
    srand(time(NULL)); //init once for rand fucntion
}

/*

*/
void func1_sqrt (void)
{
    clock_t begin = clock();
    float randomNumber = (float)rand();
    double sqrtNumber = 0;
    sqrtNumber = sqrt (randomNumber);
    if(((sqrtNumber*sqrtNumber-randomNumber)) != 0)
    {
        printf("log: output from function1 = %lf ; diff = %lf \n",sqrtNumber,sqrtNumber*sqrtNumber-randomNumber);
    }
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("log: execution interval for func1 = %lf\n",time_spent);
}


void func2_prime(double number)
{
    double lastKnownPrime = 0;
    number = number + lastKnownPrime;
    double i, count = 0;
    for (i = 1; i <= number; i++)
    {
        if (fmod(number , i) == 0)
          count++;
    }
    
    if (count == 2)
    {
        printf("log: Prime found = %f\n",number);
    }
}


