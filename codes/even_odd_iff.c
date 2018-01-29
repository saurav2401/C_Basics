// This is the program for checking the number whether it is even or odd by if else statement
/* Sample Input :
    Enter the number : 5
   Sample Output :
    The number is ODD
*/
#include <stdio.h>

void main()
{
    int num ;                           // variable declaration

    printf("Enter the number :");
    scanf("%d",&num);                   // input number

    if (num % 2 == 0)                   // testing the condition for Even number
    {
        printf("The number is EVEN");
    }
    else
    {
        printf("The number is ODD");
    }
}
