// This is program for adding two numbers , one of float and other is intger type.

/* sample input:
Enter the first number: 2
Enter the second number: 5.2
sample output:
The sum is 7.2
*/

#include <stdio.h> //This file is to be included from library of c which is standard input output function.
void main()
{
    int num1 ;
    float num2 , result;                    // declaration of variables

    printf("Enter the first number:");
    scanf("%d",&num1);                      // input first number

    printf("Enter the second number:");
    scanf("%f",&num2);                      // input second number

    result = num1 + num2 ;                  // adding both numbers

    printf("The sum is %f ",result);        // output result


}
