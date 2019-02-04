#include <stdio.h>
#include <stdlib.h>

int main()
{
    char buffer[100];
    int numberofdigits=0;
    int numberofpunctuations = 0;
    int numberofletters =0;

    printf ("Plaese enter a sting\n");
    scanf ("%s",buffer);


    int i=0;
    while(buffer[i])
    {
        if(isalpha(buffer[i]))
            ++numberofletters;
        else if(isdigit(buffer[i]))
            ++numberofdigits;
        else if(ispunct(buffer[i]))
            ++numberofpunctuations;
        ++i;
    }
    printf ("It has %d number of letter, %d number of digits and % number of punctuations\n",numberofletters,numberofdigits,numberofpunctuations);
    return 0;

}
