// This is the program to calculate the simple interest rate .

/* Sample Input :
    Enter the principle amount : 1000
    Enter the interest rate: 12
    Enter the time period : 2

   Sample Output :
    The simple_interest is : 240.0000
*/
#include <stdio.h>

void main()
{
    float principle , interest , time , simple_interest ;       // Variable declaration

    printf("Enter the principle amount :");
    scanf("%f",&principle);                                     // Input Principle

    printf("Enter the interest rate:");
    scanf("%f",&interest);                                      // Input interest

    printf("Enter the time period :");
    scanf("%f",&time);                                          // Input time

    simple_interest = (principle * interest * time)/100 ;        // Calculation of Simple interest

    printf(" The simple_interest is : %f",simple_interest);     // Output


}
