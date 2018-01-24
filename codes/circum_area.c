// program for calculation of area and the circumference of the circle of given radius.
/* Sample Input :
Enter the Radius of the circle: 7.2

Sample output :
The circumference of the circle is : 45.216000  And the area is : 162.777588
*/

#include <stdio.h>
#include <math.h>        // This is to be included from the library of C for using power

void main()
{
    float radius , area , circumference ;           // declaration of variable

    printf("Enter the Radius of the circle:");
    scanf("%f",&radius);                            // Input radius

    circumference = 2 * 3.14 * radius ;             // Circumference calculation

    area = 3.14 * pow(radius,2) ;                   // area calculation using power function

    printf("The circumference of the circle is : %f  And the area is : %f",circumference,area); // output
}
