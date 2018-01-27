// This is the program for checking number for even or odd using ternary operator by using modulas operator
/* Sample Input :
    Enter the number : 4
   Sample Output :
    The number is Even number
*/
#include <stdio.h>

void main()
{
    int num ;                               // declaration of variable

    printf("Enter the number :");
    scanf("%d",&num);                       // input number

    (num & 1) ? (printf("The number is Odd number.")) : (printf("The number is Even number")) ;  // Condition for even or odd
}
