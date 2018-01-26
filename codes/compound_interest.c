// This is the program to calculate the compound interest rate .

/* Sample Input :
    Enter the principle amount : 1000
    Enter the interest rate: 12.5
    Enter the time period : 2
    Enter number of times interest is compounded yearly : 2
   Sample Output :
    The simple_interest is : 2761816.500000
*/
#include <stdio.h>

void main()
{
    float principle , interest , time ,amount, compound_interest ;       // Variable declaration
    int n ;

    printf("Enter the principle amount :");
    scanf("%f",&principle);                                         // Input Principle

    printf("Enter the interest rate:");
    scanf("%f",&interest);                                          // Input interest

    printf("Enter the time period :");
    scanf("%f",&time);                                              // Input time

    printf("Enter number of times interest is compounded yearly :");
    scanf("%d",&n);                                                 // Input value of n

    amount = principle*pow((1+interest/n),n*time);
    compound_interest = amount - principle ;                        // Calculation of compound interest

    printf(" The compound_interest is : %f",compound_interest);       // Output


}
