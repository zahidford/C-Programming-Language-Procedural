/* This program shows how to use format specifiers

Code by Zahidul Amin
Copy Right 2009

*/

#include <stdio.h>


int main()
{

    int integervar = 100;
    float floatingVar =331.79;
    double doubleVar =8.44e+11;
    char charVar ='x';
    printf("Hello world!\n");
    _Bool boolVar = 0;

    printf ("integerVar = %i\n", integervar);
    printf ("floatingVar = %f\n", floatingVar);
    printf ("doubleVar = %e\n", doubleVar);
    printf ("charVar = %c\n", charVar);
    printf ("boolVar = %m\n", boolVar);

    return 0;
}
