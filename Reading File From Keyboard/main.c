/* This program simply reads input from Key board
   * Created by Zahidul Amin
   * Copy Right 2019
*/

#include <stdio.h>



int main()
{
    char str[100];
    int i; //integer
    printf("Enter a value:");
    scanf("%s %d", str, &i);
    printf("\n You entered: %s %d\n",str,i);
    return 0;
}
