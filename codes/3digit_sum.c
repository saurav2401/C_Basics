// This is the program for finding the sum of digits 3 digit number
/* Sample Input :
    Enter the 3 digit number : 123
   Sample Output :
    The sum of 3 digit number is : 6
*/

#include <stdio.h>

void main()
{
    int num ,n,sum=0;                       // variable declaration

    printf("Enter the 3 digit number :");
    scanf("%d",&num);                       // input number

    n = num % 10;                           // separate the unit place of the number
    sum = sum + n ;                         // add it to sum
    num = num/10;                           // remove it unit place

    // For 3 digit number repeat this step for 3 times.

    n = num % 10;
    sum = sum + n ;
    num = num/10;

    n = num % 10;
    sum = sum + n ;
    num = num/10;

    printf("The sum of 3 digit number is : %d",sum); // output
}
