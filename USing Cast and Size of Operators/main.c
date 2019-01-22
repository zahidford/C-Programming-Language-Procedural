#include <stdio.h>
#include <stdlib.h>

int main()
{
    float d = 25.43;
    float x = 33.333;
    float y;
    double size;
    y= (int)d + (int)x;
    size = sizeof(y);
    printf("Hello world!\n %f \n %d",y,size);
    return 0;
}
