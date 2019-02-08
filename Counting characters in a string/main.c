#include <stdio.h>
#include <stdlib.h>
int string_length(const char *ptr);
int main()
{
    char array[]="Zahidul Amin";
    char *pointer=array;
    string_length(pointer);

    return 0;
}
int string_length(const char *ptr){
    int count=0;
while (*ptr !='\0'){
    count++;
    *ptr++;
}

printf("length of String is %d",count);
}
