#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value=0;
    int *pvalue =&value;
    printf ("input an integer:");
    scanf("%d",pvalue);
    printf ("\n you entered %d.\n",value);

    return 0;
}
