#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[200];
    int length;
    printf("Enter a string\n");
    scanf("%s",string);
    length=strlen(string);
    int i;
    for(i=length-1;i!=-1;--i)
        printf("%c",string[i]);
    return 0;
}
