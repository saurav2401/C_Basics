// This is the program for calculation of equation of straight line passing through  2 points (X1,Y1) & (X2,Y2)
/* Sample Input :
    Enter the point X1 , Y1 : 2 3
    Enter the point X2 , Y2 : 4 5
   Sample Output :
    The equation of straight line is : Y = 1.000000X + 1.500000
*/

#include <stdio.h>

void main()
{
    int x1 , x2 , y1 , y2 ;                         // Variable declaration
    float m , c ;

    printf("Enter the point X1 , Y1 :");
    scanf("%d%d",&x1,&y1);                          // Input X1 Y1

    printf("Enter the point X2 , Y2 :");
    scanf("%d%d",&x2,&y2);                          // Input X2 Y2

    m = (y2-y1)/(x2-x1);                            // calculation of slope

    c = y1/(m*x1);                                  // calculation of constant

    printf(" The equation of straight line is : Y = %fX + %f",m,c); // Output


}
