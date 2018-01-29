// This is the program for finding greatest among 3 number using if else statement
/* Sample Input :
    Enter the first number : 14
    Enter the first number : 15
    Enter the first number : 10
   Sample Output :
    The 15 is greatest.
*/
#include <stdio.h>

void main()
{
    int x , y , z ;                             // variable declaration

    printf("Enter the first number :");
    scanf("%d",&x);                             // input first  number

    printf("Enter the second number :");
    scanf("%d",&y);                             // input second number

    printf("Enter the third number :");
    scanf("%d",&z);                             // input third number

    if (x > y)                                  // checking greatest among number 1 and number 2
    {
        if (x > z)                              // if the first one is greater then check with 3rd one
        {
            printf("The %d is greatest.",x);     // if above is true then number 1 is greatest else 3rd one is greater
        }
        else
        {
            printf("The %d is greatest.",z);
        }
    }
    else                                            // if number 2 is greater then compare with 3rd number.
    {
        if (y > z)                                  // if true number 2 is greater else number 3 is greater
        {
            printf("The %d is greatest.",y);
        }
        else
        {
            printf("The %d is greatest.",z);
        }
    }


}
