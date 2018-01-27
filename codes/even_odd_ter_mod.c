// This is the program for checking number for even or odd using ternary operator by using modulas operator
/* Sample Input :
    Enter the number : 5
   Sample Output :
    The number is odd number
*/
#include <stdio.h>

void main()
{
    int num ;                       // declaration of variable

    printf("Enter the number :");
    scanf("%d",&num);               // input number

    ((num % 2) == 0) ? (printf("The number is even number.")) : (printf("The number is odd number")) ; // Condition for even or odd
}
