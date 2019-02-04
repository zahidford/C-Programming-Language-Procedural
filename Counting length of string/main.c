#include <stdio.h>
#include <stdlib.h>

int main()
{

    length_of_string();
    return 0;
}

 int length_of_string(void){
 char string_b[100];
 printf("Enter a string\n");
 scanf("%[^\t\n]s",&string_b);
 unsigned int i=0;

 while(string_b[i]!='\0')
    ++i;

 printf("the length of string is %d",(i));
 return 0;
}
