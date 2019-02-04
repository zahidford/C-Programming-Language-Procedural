#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    char name[25][50], temp[25];
    int l, i, n, j;
//    char string1[100];
//    char string2[100];
//    char string3[100];
//    int compare1;
//    int compare2;
//    int compare3;
//
//    printf("Enter Number of String 3 times\n");
//
//    scanf("%s",string1);
//    scanf("%s",string2);
//    scanf("%s",string3);
//
//    compare1 =strcmp(string2,string1);
//    compare2 =strcmp(string3,string2);
//    compare3 =strcmp(string1,string3);
//
//    if ((compare1==1)&& (compare2==1)){
//        printf("%s %s %s",string1,string2,string3);
//    }
//    else if ((compare1==-1)&& (compare2==-1)){
//        printf("%s %s %s",string3,string2,string1);
//    }
//     else if ((compare1==1)&& (compare2==-1)){
//        printf("%s %s %s",string1,string3,string2);
//    }
//    else
//    printf("%s %s %s",string2,string3,string1);
 printf("\n");
    printf("----------------------------------------------------------");

    printf("\n\nSorts the strings of an array using bubble sort :  \n");
    printf("---------------------------------------------------------\n");

    printf("Input number of strings :");
    scanf("%d", &n);

    printf("Input string %d : \n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
    }

    for(i=1;i<=n;i++)
        for(j=0;j<=n-i;j++)
            if(strcmp(name[j],name[j+1])>0)
            {
                strncpy(temp,name[j], sizeof(temp) - 1);
                strncpy(name[j],name[j+1], sizeof(name[j]) - 1);
                strncpy(name[j+1],temp, sizeof(name[j] + 1) - 1);
            }

    printf("The strings appear after sorting :\n");

    for (i = 0; i <= n; i++)
        printf("%s\n", name[i]);

    return 0;
}




