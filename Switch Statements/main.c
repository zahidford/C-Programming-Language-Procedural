#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum weekdays {sunday,monday,tuesday,wednesday,thursday};
    enum weekdays today = monday;
    switch (today)
    {
    case sunday:
        printf("today is sunday");
        break;
    case monday:
        printf("today is monday");
        break;
    default:
        printf("i do not know");
    }
    printf("Hello world!\n");
    return 0;
}
