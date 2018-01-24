// this is program for swaping of two variable using 3rd varialbe.

# include <stdio.h>

void main()
{
    int var1 , var2 , var3; // declaration of variables

    printf("Enter the variable 1 :");
    scanf("%d",&var1);                  // input first variable

    printf("Enter the variable 2 :");
    scanf("%d",&var2);                  // input second variable

    var3 = var1;
    var1 = var2;                        // swaping of variable
    var2 = var3;

    printf("The values after swaping are : %d %d ",var1,var2); // after swaping
}
