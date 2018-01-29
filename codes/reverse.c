// This is the program for finding the reverse of the number without using loop
/* Sample Input :
    Enter the 3 digit number : 123
   Sample Output :
    The reverse of the number is : 321
*/
#include <stdio.h>

void main()
{
    int num ,n,reverse=0;                       // variable declaration

    printf("Enter the 3 digit number :");
    scanf("%d",&num);                           // input number

    n = num % 10;                        // separate the unit place and store it in variable 'n'
    reverse = reverse*10 + n ;          // add it to variable reverse after multiplying it by 10 so that it add at 10's place
    num = num/10;                       // divide the number by 10 to convert it into 2 digit.

// For 3 digit number repeat this process for 3 times

    n = num % 10;
    reverse = reverse*10 + n ;
    num = num/10;

    n = num % 10;
    reverse = reverse*10 + n ;
    num = num/10;

    printf("The reverse of the number is : %d",reverse);  // output

}
