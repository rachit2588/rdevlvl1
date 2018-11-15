#include <stdio.h>
#include <math.h>
#include "function.h"
#include <time.h>
#include <stdlib.h>

clock_t beginGlob;
clock_t endGlob;
/***********************
 Function Prototype List
 (Same populated in header)
 ***********************/
//void func_init(void);
//void func1_sqrt(float);
//void func2_prime(double);

/*************************
 Function Declaration Area
 *************************/
void func_init()
{
    //any init required for functions goes here..
    srand(time(NULL)); //init once for rand fucntion
}

/*
void func1_sqrt (float)
 Generates sqrt of given number or random number
 and measure exec time
 requires func init 
*/
double func1_sqrt (float input)
{
    clock_t begin = clock();
    float randomNumber = input==0?(float)rand():input;
    double sqrtNumber = 0;
    sqrtNumber = sqrt (randomNumber);
    /*if(((sqrtNumber*sqrtNumber-randomNumber)) != 0)
    {
        printf("log: output from function1 = %lf ; diff = %lf \n",sqrtNumber,sqrtNumber*sqrtNumber-randomNumber);
    }*/
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("log: execution interval func1_sqrt = %lf\n",time_spent);
    printf("log: func1_sqrt sqrt %f = %f\n",randomNumber,sqrtNumber);
    return sqrtNumber;
}



/*
 func2_prime
 Check Prime
 */
void func2_prime(double number)
{
    clock_t begin = clock();
    double i, count = 0;
    for (i = 1; i <= number; i++)
    {
        if (fmod(number, i) == 0)
          count++;
        if((count==2)&&(i<number))
        {
            return;
        }
    }

    if (count == 2)
    {
        printf("log: func2_prime Prime # found = %f\n",number);
        clock_t end = clock();
        double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
        printf("log: inner execution interval prime = %lf s\n",time_spent);
        return  ;
    }
}

/*
 function:func3_factorial
 returns factorial
 */
long double func3_factorial(long double number)
{
    long double result = 1;
    for (int i = 1; i <= number; i++)
    {
        result = result*i;
    }
    printf("Factorial of %Lf = %Lf\n",number,result);
    return result;
}

