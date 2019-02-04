#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int stringLength(const char string[]);
void concat(char result[], const char str[], const char str1[]);
bool equalStrings(const char s1[], const char s2[]);

int main()
{


    printf("\n%d\n", equalStrings("Jason", "Jason"));
    printf("%d\n", equalStrings("Jasons", "Jason"));

    return 0;
}



bool equalStrings(const char s1[], const char s2[])
{
    int i = 0;
    bool isEquals = false;

    while ( s1[i] == s2 [i]  &&
            s1[i] != '\0' &&
            s2[i] != '\0' )
        ++i;

    if ( s1[i] == '\0'  &&  s2[i] == '\0' )
       isEquals = true;
    else
       isEquals = false;

    return isEquals;
}
