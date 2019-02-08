#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    FILE *read;
    FILE *read1;
    char c;
    char u;
    read = fopen("file.txt","r");
    read1 = fopen("temp.txt","w");
    if (read ==NULL){
        perror("ERROR IN OPENING FILE");
        return(-1);
        //
        }
        while((c=fgetc(read))!=EOF){
            if (islower(c))
                u=c-32;
               fputc(u, read1);
               fputc(u, read);// This line Emties the file WHY!!
        };
        fclose(read);
        fclose (read1);

    return 0;
}
