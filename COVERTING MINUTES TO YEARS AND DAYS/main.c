#include <stdio.h>
#include <stdlib.h>

int main()
{
    double minutes = 0;
    double years = 0.0;
    double days =0.0;
    printf("Enter number of minutes");
    scanf("%i", &minutes);
    years = (minutes/525600);
    days = (minutes/1440);
    printf("Hello world!\n total is %f days and %f years",days,years);
    return 0;
}
