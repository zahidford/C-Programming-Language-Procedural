//#include <stdio.h>
//#include <stdlib.h>
//
//void concat(const char str[], const char str1[]);
//int main()
//{
//    char string1[100];
//    char string2[100];
//
//    printf("Please Enter a string below 100 characters\n");
//    scanf("%s",&string1);
//
//    printf("Please Enter a string below 100 characters\n");
//    scanf("%s",&string2);
//
//    concat(string1,string2);
//
//    return 0;
//}
//
//void concat(const char str[], const char str1[]){
//    int i;
//    int j;
//    char result[50];
//    for(i=0;str[i]!='\0';++i){
//        result[i] =str[i];
//    }
//    for(j=0;str1[j]!='\0';++j){
//       result[i+j] =str1[j];
//    }
//
//        printf("\n%s",result);
//}


#include <stdio.h>
#include <stdlib.h>

void concatnte(char stringa[], char stringb[]);
int main()
{
    char string1[100];
    char string2[100];

    printf("Please Enter a string below 100 characters\n");
    scanf("%s",&string1);

    printf("Please Enter a string below 100 characters\n");
    scanf("%s",&string2);

    concatnte(string1,string2);

    return 0;
}

void concatnte(char stringa[], char stringb[]){
    int i;
    int j;
    for( i=0;stringa[i]!='\0';++i)
        printf("%c",stringa[i]);
    for(j=0;stringb[j]!='\0';++j)
        printf("%c",stringb[j]);
        return 0;
}
