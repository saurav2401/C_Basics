// This is the program to convert the velocity from the km/he to m/s.

/* Sample Input :
    Enter the velocity in km/hr : 72

  Sample Output :
    The velocity in m/s is : 20.0000
*/

 #include <stdio.h>

void main()
{
    float km , ms;                              //Variable declaration

    printf("Enter the velocity in km/hr :");
    scanf("%f",&km);                            // Input the velocity

    ms = km * 5/18 ;                            // Velocity conversion

    printf("The velocity in m/s is : %f",ms);   // Output
}
