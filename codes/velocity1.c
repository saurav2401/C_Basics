// This is the program to convert the velocity from the m/s to km/hr.

/* Sample Input :
    Enter the velocity in m/s : 20

  Sample Output :
    The velocity in km/hr is : 72.0000
*/

 #include <stdio.h>

void main()
{
    float km , ms;                              //Variable declaration

    printf("Enter the velocity in m/s :");
    scanf("%f",&ms);                            // Input the velocity

    km = ms * 18/5 ;                            // Velocity conversion

    printf("The velocity in km/hr is : %f",km);   // Output
}
