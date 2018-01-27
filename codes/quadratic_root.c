// This is the program for finding the roots of the quadratic equation
/* Sample Input :
    Enter the cofficient of X^2 : 1
    Enter the cofficient of X : -5
    Enter the constant term : 6
   Sample Output :
    The roots of the equation 1X^2 + -5X + 6 is : 3.0000 and 2.0000
*/
#include <stdio.h>
#include <math.h>

void main()
{
    int a , b , c;
    float  x1 , x2 ;                                    // variable declaration

    printf("Enter the cofficient of X^2 :");
    scanf("%d",&a);                                     // input a

    printf("Enter the cofficient of X :");
    scanf("%d",&b);                                     // input b

    printf("Enter the constant term :");
    scanf("%d",&c);                                     // input c

    x1 = (-b + sqrt(pow(b,2)-4*a*c))/2*a ;              // calculating the roots of the equation
    x2 = (-b - sqrt(pow(b,2)-4*a*c))/2*a ;

    printf("The roots of the equation %dX^2 + %dX + %d is : %f and %f",a,b,c,x1,x2); // output
}
