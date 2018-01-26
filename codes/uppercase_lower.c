// This is the program for conversion of upper case charecter to lower case
/* Sample Input :
    Enter the Upper case Charecter : A
   Sample Output :
    The Lower case charecter is : a
*/
#include <stdio.h>

void main()
{
    char charecter ;
    int lowercase ;                                         // declaration of variable

    printf("Enter the Upper case Charecter :");
    scanf("%c",&charecter);                                 // Input upper case charecter

    lowercase = charecter + 32 ;                            // conversion of charecter to lower case

    printf("The Lower case charecter is : %c",lowercase);   // Output
}
