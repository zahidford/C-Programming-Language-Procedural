#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value=100;
    // Now you cant change the address of the vale
    const int const *pvalue =&value;
    printf ("input an integer:");
    scanf("%d",pvalue); // This is allowed
    *pvalue=20; // but not this
    printf ("\n you entered %d.\n",value);

    return 0;
}
