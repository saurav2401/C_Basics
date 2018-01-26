// This is the program for conversion of lower case charecter to upper case
/* Sample Input :
    Enter the Lower case Charecter : a
   Sample Output :
    The Upper case case charecter is : A
*/
#include <stdio.h>

void main()
{
    char charecter ;
    int uppercase ;                                         // declaration of variable

    printf("Enter the lower case Charecter :");
    scanf("%c",&charecter);                                 // Input upper case charecter

    uppercase = charecter - 32 ;                            // conversion of charecter to Upper case

    printf("The Upper case charecter is : %c",uppercase);   // Output
}
