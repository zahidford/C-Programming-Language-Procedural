#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number =15;
    int *pointer = &number;
    int xyz=*pointer;
    printf("Hello world!\n The pointer address is  ",xyz);
    return 0;
}
