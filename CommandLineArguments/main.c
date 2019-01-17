#include <stdio.h>

int main(int argc, char *argv[])
{
    int numberofargument = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];
     printf("Hello world!\n");
    printf ("Number of arguments %d\n", numberofargument);
    printf ("The first argument is the name of the program %s\n", argument1);
    printf ("the second argument is %s", argument2);



    return 0;
}
