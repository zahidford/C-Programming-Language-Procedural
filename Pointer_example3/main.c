#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number = 0;
    int *pnumber = NULL;
    number = 10;
    printf("number's address: %p",&number);
    printf("number's value: %d\n", number);
    pnumber =&number;

    printf("pnumber's address:%p\n",(void*)&pnumber);
    printf("pnumber's size:%d bytes\n",sizeof(pnumber));
    printf("pnumver's value: %p\n",pnumber);
    printf("value pointed to:%d\n",*pnumber);

    return 0;
}
