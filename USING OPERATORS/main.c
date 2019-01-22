/* This program show how to use different operators
    Created by Zahidul Amin
    Copy Right: 2019; */

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a = 33;
    int b = 15;
    _Bool m = 1;
    _Bool n = 0;
    _Bool result;
    int addition;
    int subtraction;
    int modulus;
    int multiplication;
    int division;

    addition = a + b;
    subtraction = a - b;
    division = a / b;
    modulus = a % b;
    multiplication = a * b;
    result = a||b;

    printf("Hello world! addition is %d  Subtration is %d  division is %d modulus is % d multiplication is %d\n", addition,subtraction,modulus,multiplication,division);
    printf ("hello  m or n is %d", result);
    return 0;
}
