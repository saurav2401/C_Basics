// This is the program for checking whether the given year is LEAP or NOT
/* Sample Input :
    Enter the yaer : 1998
   Sample Output :
    The yaer 1998 is Not leap year
*/

#include <stdio.h>

void main()
{
    int year ;                      // variable declaration

    printf("Enter the yaer :");
    scanf("%d",&year);              // input year

    // below line is for checking the year for LEAP or NOT
    ((year % 400 ==0)|| ((year % 4 == 0) && (year % 100 != 100))) ? (printf("The yaer %d is leap year.",year)) : (printf("The yaer %d is Not leap year",year)) ;
}
