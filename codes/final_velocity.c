// This is the program for calculating the final velocity .
/* Sample Input :
    Enter the initial velocity (u) : 5.2
    Enter the acceleration (a) : 10
    Enter the time (t) : 6
   Sample Output:
    The final velocity (v) is : 65.199997
*/
#include <stdio.h>

void main()
{
    float v , u , a , t;                            // variable declaration

    printf("Enter the initial velocity (u) :");
    scanf("%f",&u);                                 // input initial velocity

    printf("Enter the acceleration (a) :");
    scanf("%f",&a);                                 // input acceleration

    printf("Enter the time (t) :");
    scanf("%f",&t);                                 // input time

    v = u+a*t;                                      // calculation of final velocity

    printf("The final velocity (v) is : %f",v);     // output
}
