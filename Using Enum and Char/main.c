/* This Program shows how to use ENUM and CHAR
    Created by Zahidul Amun
    Copy Right: 2019*/

#include <stdio.h>


int main()
{
     enum gender {Male,Female}; //declaring elements gender represents
     enum gender gendertype1;
     gendertype1= Male;
     enum gender gendertype2;
     gendertype2= Female;
     _Bool samegender = (gendertype1==gendertype1);
     printf("%i",samegender);

     char newline= '\n';//using Char
     printf("%c", newline);
    return 0;
}
