/* Name: Akello Esther Okalany */
/* Student Number: 2500800023 */
/* Registration Number: 25/U/BIO/023/GV */

#include <stdio.h>

int main(void)
{
    float UC;
    int C, Bill;
    //UC is the Units Consumed
    //C is the Cost Per Unit
    
    printf("Enter the Units Consumed: ");
    scanf("%f", &UC);
    
    printf("Enter Cost Per Unit: ");
    scanf("%d", &C);
    
    Bill = UC*C;
    printf("Total Bill: %.d", Bill);

    return 0;
}
