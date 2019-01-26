/* This Program Simply Shows how to Use and Call Functions in C
Written by Zahidul Amin
Copy Right 2019
 */



#include <stdio.h>
#include <stdlib.h>

/*
 * C program to find the GCD and LCM of two integers using Euclids' algorithm
 */
#include <stdio.h>

int gcd(void)
{
    int num1,num2, gcd, lcm, remainder, numerator, denominator;

    printf("Enter two numbers\n");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
    {
        numerator = num1;
        denominator = num2;
    }
    else
    {
        numerator = num2;
        denominator = num1;
    }
    remainder = numerator % denominator;
    while (remainder != 0)
    {
        numerator   = denominator;
        denominator = remainder;
        remainder   = numerator % denominator;
    }
    gcd = denominator;
    lcm = num1 * num2 / gcd;
    printf("GCD of %d and %d = %d\n", num1, num2, gcd);
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);
}

float absolute_value(float x){
        if (x<0)
            x=-x;
        return x;
}
float square_number (float square){
   float squared;
   squared=absolute_value(square)*absolute_value(square);
   printf("the square number is %f",squared);
   return 0;}

int main()
{
    float f1;
    printf("Hello at first We will find Greatest Common Divisor\n");
    gcd();
  printf("Hello at now We will find Absolute value\n");
        scanf("%f",&f1);
        absolute_value(f1);
        printf ("The absolute number is %f \n",f1);
    printf("Hello now We will find Square value\n");

    float squaring;
    scanf("%f",&squaring);
    square_number(squaring);
    return 0;
}
