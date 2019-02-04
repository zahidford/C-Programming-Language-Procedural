#include <stdio.h>
#include <stdlib.h>

int main()

{
    long num1=100000;
    //long num2=200000
    long *pnum =NULL;

    pnum = &num1;
    printf(" Pnum Value is %p\n",pnum);
    printf(" num1 Value is %i\n",num1);
    *pnum =20;
    printf(" Pnum Value is %p\n",pnum);
    printf(" num1 Value is %i\n",num1);
    pnum = &num1;
    printf(" Pnum Value is %p\n",pnum);
    printf(" num1 Value is %i\n",num1);
    return 0;
}
