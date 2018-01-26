// this is program for interchanging the vlue of X , Y , Z

# include <stdio.h>

void main()
{
    int x , y , z ,w;                   // declaration of variables

    printf("Enter the X :");
    scanf("%d",&x);                  // input X

    printf("Enter the Y :");
    scanf("%d",&y);                  // input Y

    printf("Enter the Z :");
    scanf("%d",&z);                 // input Z

    w = x;
    x = y;                          // swaping of variable
    y = z;
    z = w;

    printf("The values after swaping are : %d %d %d ",x,y,z); // after swaping
}
