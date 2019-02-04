#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count =10,x;
    int *int_pointer=NULL;
    int_pointer=&count;
    x= *int_pointer;
    printf("count=%i,x=%i\n",count,x);
    return 0;
}
