#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *read;
    char c;
    int i =0;
    read = fopen("file.txt","r");
    if (read ==NULL){
        perror("ERROR IN OPENING FILE");
        return(-1);
        //
        }
        while((c=fgetc(read))!=EOF){
            if (c=='\n')
                i++;
        }

    printf("number of lines %i",++i);
    return 0;
}
