#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int count = 12;
    int i;
    long sum=0;
    float average = 0.0;
    for(i=0;i<count;++i)
    {
    printf(" Month %u> has %i\n ",i+1,month[i] );

    }


    return 0;
}
