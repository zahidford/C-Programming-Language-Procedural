/* This Program shows how to use ENUM
    Created by Zahidul Amun
    Copy Right: 2019*/

#include <stdio.h>


int main()
{
     enum company {GOOGLE,FACEBOOK,XEROX,YAHOO,EBAY,MICROSOFT}; //declaring elements gender represents
     enum company company1;
     enum company company2;
     enum company company3;
     company1= XEROX;
     company2= GOOGLE;
     company3= EBAY;

     printf("%i\n %i\n %i\n", company1,company2,company3);


    return 0;
}
