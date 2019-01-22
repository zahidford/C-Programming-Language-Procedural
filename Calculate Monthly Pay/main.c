// This program calculates monthly pay

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float hours_worked;
    float over_time_worked;
    float earnings;
    float earnings_overtime;
    float total_earnings;
    float tax_rate_300;
    float tax_rate_next_150;
    float tax_rate_rest;
    float net_pay;

    printf("Enter Number of Hours Worked \n");
    scanf("%f",&hours_worked);

    if (hours_worked <= 40)
    {
         earnings=hours_worked*12;
    total_earnings= earnings;
    }

    else if (hours_worked>40)
    {
        over_time_worked= hours_worked-40;
        earnings_overtime = over_time_worked * 18;
        earnings=40*12;
        total_earnings= earnings+earnings_overtime;
    }

    // Taxation

    if (total_earnings<=300)
    {
        net_pay = total_earnings- (0.15*total_earnings);
        printf("You are so less dummy this is your net pay %f",net_pay);
    }

    else if (total_earnings >300 &&total_earnings <=450){
        tax_rate_300= 300*0.15;
        tax_rate_next_150 = (total_earnings-300)*0.20;
        net_pay = total_earnings - (tax_rate_300+tax_rate_next_150);
        printf("Moving up in life good income %f",net_pay);
    }
    else if (total_earnings>450)
    {
        tax_rate_rest= 0.25*(total_earnings-450);
        tax_rate_next_150 = (150)*0.20;
        tax_rate_300= 300*0.15;
        net_pay = total_earnings - (tax_rate_300+tax_rate_next_150+tax_rate_rest);
        printf("Buy a lamborgini %f",net_pay);
    }






    printf("Hello world!\n");
    return 0;
}
