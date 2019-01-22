//how to use if and else statement;

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score =95;
    int big = 90;
    if (score>big)
        printf("jackpot!\n");

    if (score>big)
    {
        score++;
        printf("Hello world!\n");
    }
    int number_to_test,remainder;
    printf("Enter your number to be tested:");
    scanf("%i", &number_to_test);
    remainder = number_to_test % 2;

    // if else statement
    if (remainder == 0)
        printf("The number is even \n");
    else
        printf("the number is odd.\n");
    // else if and nested if
    int number;
    printf("Please type in a number");
    scanf("%i",&number);
    if (number <0){
        if (number ==-1)
            printf("this is nested if\n");
    printf("Its negative");}
    else if (number==0)
    printf("its neutral");
    else
    printf("its positive");
    return 0;
}
// a=b>5 ? 25:30;
