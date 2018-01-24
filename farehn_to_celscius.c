// WAP to convert temparature from farinheit to celcius .
/* Sample INPUT :
 Enter the temparature in Farinheit: 45

 Sample OUTPUT:
 The Tempareture in celcius is: 7.222222
 */
#include <Stdio.h>

void main()
{
    float farinheit ,celcius;                           // Variable declaration

    printf("Enter the temparature in Farinheit: ");
    scanf("%f",&farinheit);                             // Input from user

    celcius = (farinheit-32)*5/9;                       // Conversion of temparature

    printf("The Tempareture in celcius is: %f ",celcius);       // output
}
