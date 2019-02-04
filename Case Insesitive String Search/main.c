#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char main_sting[100];
    char second_string[40];

    printf("Please Enter the String to be Searched(less than %d characters:\n",100);
    scanf("%s",main_sting);
    printf("\n Enter the string where it will be sought(less than %d characters:\n",40);
    scanf("%s",second_string);

    printf("\n First string entered:\n %s\n",main_sting);
    printf("\n Second string entered:\n %s\n",second_string);

    // convert both to upper case
    int i = 0;
    for(i=0;(main_sting[i]=(char)toupper(main_sting[i]))!='\0';++i);
    for(i=0;(second_string[i]=(char)toupper(second_string[i]))!='\0';++i);

    printf("The second string %s found in the first.\n",((strstr(main_sting,second_string)== NULL)? "was not":"was"));
    return 0;
}
