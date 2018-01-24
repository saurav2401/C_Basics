// this is program for swaping of two variable without using 3rd varialbe.

# include <stdio.h>

void main()
{
    int var1 , var2 ; // declaration of variables

    printf("Enter the variable 1 :");
    scanf("%d",&var1);                  // input first variable

    printf("Enter the variable 2 :");
    scanf("%d",&var2);                  // input second variable

    var1 = var1 + var2;
    var2 = var1 - var2;                        // swaping of variable using sum.
    var1 = var1 - var2;

    printf("The values after swaping are : %d %d ",var1,var2); // after swaping
}
