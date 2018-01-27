// This is the program for calculating the Gross salary where DA is 20% of Basic salary and HRA is 25% of Basic salary
// Gross salary = DA + HRA
/* Sample Input :
    Enter the Basic Salary : 40000
   Sample Output :
    The Gross salary is : 18000.00000
*/

#include <stdio.h>

void main()
{
    float DA , HRA , gross_sal , basic_sal ;            // variable declaration

    printf("Enter the Basic Salary :");
    scanf("%f",&basic_sal);                             // Input Basic salary

    DA = (basic_sal*20)/100 ;                           // calculation of DA
    HRA = (basic_sal*25)/100 ;                          // Calculation of HRA

    gross_sal = DA+HRA ;                                // Calculation of Grass salary

    printf("The Gross salary is : %f",gross_sal);       // Output
}
