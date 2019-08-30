// This is the program for checking the 3 digit number for Armstrong or Not without using loop
/* 3 digit Armstrong number is the sum of cube of the digits of the number. if it is of 2 digit then sum of
   square of the digits and so on.
   example 153 = 1*1*1 + 5*5*5 + 3*3*3 = 153 it is armstrong number.
*/
/* Sample Input :
    Enter the 3 digit number : 150
   Sample Output :
    The number is Not Armstrong
*/
#include <stdio.h>

void main()
{
    int num ,n,cube=0 ,flag;                       // variable declaration

    printf("Enter the 3 digit number :");
    scanf("%d",&num);                           // input number

    flag = num;

    n = num % 10;                        // separate the unit place and store it in variable 'n'
    cube = cube + n*n*n ;          // add the cube of the digit to variable cube
    num = num/10;                       // divide the number by 10 to convert it into 2 digit.

// For 3 digit number repeat this process for 3 times

    n = num % 10;
    cube = cube + n*n*n ;
    num = num/10;

    n = num % 10;
    cube = cube + n*n*n ;
    num = num/10;

    if (cube == flag)
    {
        printf("The number is Armstrong ");
    }
    else
    {
        printf("The number is Not Armstrong");
    }





}
