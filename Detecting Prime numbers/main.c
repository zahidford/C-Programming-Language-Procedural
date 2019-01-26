#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primenumber[25]={2,3};
    int count;
    int i=2;
    int j;
    for(count=3;count<100;++count){

        if (count%2==0)
        continue;
        else if (count%3 ==0)
                continue;
                else if (count%5 ==0)
                continue;
                        else if (count%7 ==0)
                        continue;
                                else if (count%11 ==0)
                                continue;
                                   else {
                                        primenumber[i]=count;
                                            ++i;}




        }

        for (j=0;j<25;++j){

            printf("%i \n",primenumber[j]);
        }


    return 0;
}
