#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    //int c;
    char str[60];
    fp=fopen("MYFILE.txt","r");
    if(fp==NULL){
        perror("Error in opening file");
        return(-1);
    }
    //read char
  //  while((c=fgetc(fp))!=EOF)
   //     printf("%c",c);
   if (fgets(str,60,fp)!=NULL){
    printf("%s",str);
   }
    fclose(fp);
    fp=NULL;

    system("pause");
    return 0;
}
