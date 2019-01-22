/* This program tells converts temperature
 written by Zahidul Amin */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int farenheigth;

    double converter;
    scanf("%d",&farenheigth);
    converter =(farenheigth - 32)*(5.0/9.0);

    printf("Hello world!\n the temperature in celcious is %f",converter);
    return 0;
}
