#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float value1,value2;
    char operator;
    printf("Type in Value then operator then value");
    scanf("%f,%c,%f",&value1,&operator,&value2);
    switch(operator)
    {
      case '+':
        printf("%2f\n",value1 + value2);
        break;
      case '-':
        printf("%2f\n",value1 - value2);
        break;
      case '*':
        printf("%2f\n",value1 * value2);
        break;
      case '/':
        printf("%2f\n",value1 / value2);
        break;
      default:
        printf("Unkown operator \n");
    }

    return 0;
}
