#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arraysize[10];
    int count = 2;
    int i;
    long sum=0;
    float average = 0.0;
    for(i=0;i<count;++i)
    {
    printf("%u> ",i+1 );
    scanf("%d",&arraysize[i]);
       sum = sum+arraysize[i];
    }
    average= sum/count;
    printf("The average grade is %f",average);
    return 0;
}
