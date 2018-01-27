// This is the program for checking the greatest among 3 number
/* Sample Input :
    Enter the number 1 : 16
    Enter the number 2 : 8
    Enter the number 3 : 18
   Sample Output :
    18 is greatest
*/
#include <stdio.h>

void main()
{
    int num1 , num2 ,num3 ;                 // variable declaration

    printf("Enter the number 1 :");
    scanf("%d",&num1);                      // input number 1

    printf("Enter the number 2 :");
    scanf("%d",&num2);                      // input number 2

    printf("Enter the number 3 :");
    scanf("%d",&num3);                      // input number 3


    // Below line is for checking the greatest among 3 number using ternary operator
    (num1 > num2) ? ((num1 > num3) ? (printf("%d is greatest",num1)) : (printf("%d is greatest",num3))) : ((num2 > num3) ? (printf("%d is greatest",num2)) : (printf("%d is greatest",num3))) ;
}
