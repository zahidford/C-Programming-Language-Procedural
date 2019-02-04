#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=10;
    float f =2.34;
    char ch ='k';
    void *vptr;
    vptr=&i;
    printf("Value of i=%d\n",*(int*)vptr);
    vptr=&f;
    printf("value of f=%.2f\n",*(float*)vptr);
    vptr=&ch;
    printf("value of ch=%c\n",*(char*)vptr);
    printf("Hello world!\n");
    return 0;
}
