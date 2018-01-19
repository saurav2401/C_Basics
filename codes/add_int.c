// This is program for adding two numbers of integer type.

/* sample input:
Enter the first number: 2
Enter the second number: 5
sample output:
The sum is 7
*/

#include <stdio.h> //This file is to be included from library of c which is standard input output function.
void main()
{
    int num1 , num2 , result; // declaration of variables

    printf("Enter the first number:");
    scanf("%d",&num1);                      // input first number

    printf("Enter the second number:");
    scanf("%d",&num2);                      // input second number

    result = num1 + num2 ;                  // adding both numbers

    printf("The sum is %d ",result);        // output result


}
