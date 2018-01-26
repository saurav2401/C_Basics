// This is the program for printing the ASCII value of the charecter
/* Sample Input :
    Enter the charecter : s
   Sample Output :
    The ASCII value of the charecter s is 115
*/
#include <stdio.h>

void main()
{
    char charecter ;                            // declaration of variable

    printf("Enter the charecter :");
    scanf("%c",&charecter);                     // input charecter

    printf("The ASCII value of the charecter %c is %d",charecter,charecter); // printing ASCII value
}
