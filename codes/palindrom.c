// This is th program For checking the number whether it is PALINDROM or NOT.
// if the reverse of the number is same as the input number then it is called as PALINDROM number.
/* Sample Input :
    Enter the 3 digit number : 121
   Sample Output :
    The number 121 is PALINDROM
*/
#include <stdio.h>

void main()
{
    int num, n, reverse=0, flag  ;                  // variable declaration

    printf("Enter the 3 digit number :");
    scanf("%d",&num);                               // input the number

    flag = num ;                                    // store the number in other variable for comparing the input number

    n = num % 10;                                   // separate the unit place
    reverse = reverse*10 + n ;                      // add it to the variable 'reverse' at 10's place
    num = num/10;                                   // divide the number by 10 for converting it to 2 digit number

    // repeat this process 3 times for 3 digit number

    n = num % 10;
    reverse = reverse*10 + n ;
    num = num/10;

    n = num % 10;
    reverse = reverse*10 + n ;
    num = num/10;

    if (flag == reverse)                  // compare the reverse number to the input number for checking for PALINDROM
    {
        printf("The number %d is PALINDROM",flag);
    }
    else
    {
        printf("The number %d is NOT PALINDROM",flag);
    }

}
