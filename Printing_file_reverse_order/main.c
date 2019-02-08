#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp =NULL;
    int cnt = 0;
    int i = 0;
    fp = fopen("file.txt","r");
    if (fp==NULL)
        return -1;
    fseek(fp,0,SEEK_END);
    cnt =ftell(fp);
    while (i<cnt)
    {
        i++;
        fseek(fp,-i,SEEK_END);
        printf("%c",fgetc(fp));


    }
    printf("\n");
    fclose(fp);
    fp=NULL;
    return 0;
}
