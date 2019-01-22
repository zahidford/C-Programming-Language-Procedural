#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count =10;
    int sum =200;
    unsigned int i =1;

    while(i<=count)
        { sum +=i;
        ++i;
        printf("%i\n",sum);
    printf("Hello world!\n");
        }
    return 0;
}
