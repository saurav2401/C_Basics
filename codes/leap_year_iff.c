// This is the program for checking the year for LEAP or NOT by if else statement
/* Sample Input :
    Enter the Year : 2016
   Sample Output :
    The year is LEAP year
*/
#include <stdio.h>

void main()
{
    int year ;                          // variable declaration

    printf("Enter the Year :");
    scanf("%d",&year);                  // input year

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 !=0))    // condition for LEAP year
    {
        printf("The year is LEAP year");
    }
    else
    {
        printf("The year is NOT LEAP year");
    }
}
