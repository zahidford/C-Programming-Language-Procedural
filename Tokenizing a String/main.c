#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[80]="The name -of the -string -is";
    const char s[2] ="-";
    char *token;
    token =strtok(str,s);
    while(token !=NULL) {
        printf(" %s\n",token);
        token = strtok(NULL,s);
    }

    return 0;
}
