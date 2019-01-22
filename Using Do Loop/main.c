#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count =10;
    int sum =300;
    unsigned int i =1;
    do
       { sum +=i;
        ++i;
        printf("%i\n",sum);
    printf("Hello world!\n");
        }
    while(i<=count);

    return 0;
}
