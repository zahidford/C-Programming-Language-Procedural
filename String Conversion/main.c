#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define true 1
#define false (!true)
int main()
{
double value = 0;
char str[]="20 20 20";
char *pstr =str;
char *ptr = NULL;

while(true)
{
    value = strtod(pstr,&ptr);
    if(pstr == ptr)
        break;
    else
    {
        printf("%f\n",value); //output of the resultant value
        pstr=ptr; //store start for next conversion
     }
    }
}

