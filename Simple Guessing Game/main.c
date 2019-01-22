#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    time_t t;
    //initialization of random variable
    srand((unsigned)time(&t));
    int randomnumber = rand()%21;
    int gueseed_number;
    int count=0;

    printf("Please guess the number between 0 and 20, you will get only 5 chances\n");
    scanf("%d",&gueseed_number);
    for (count=0;count<5;count=count+1)
    {



        if (gueseed_number==randomnumber)
        {
             printf("You Guess it Right");
             break;
        }
        else if (count==0)
        {
                printf("guess again you have four chances left\n");
                scanf("%d",&gueseed_number);
        if (gueseed_number==randomnumber)
        {
             printf("You Guess it Right");
             break;

        }
        }
        else if (count==1)
        {
                printf("guess again you have three chances left\n");
                scanf("%d",&gueseed_number);
        if (gueseed_number==randomnumber)
        {
             printf("You Guess it Right");
             break;

        }
        }
        else if (count==2)
        {
                printf("guess again you have two chances left\n");
                scanf("%d",&gueseed_number);
        if (gueseed_number==randomnumber)
        {
             printf("You Guess it Right");
             break;

        }
        }
        else if (count==4)
        {
                printf("guess again you have one chances left\n");
                scanf("%d",&gueseed_number);
        if (gueseed_number==randomnumber)
        {
             printf("You Guess it Right");
             break;

        }
        if (gueseed_number!=randomnumber)
        {
             printf("LOSER!!!!");
             break;

        }
        }


    }

    return 0;
}
