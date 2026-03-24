/* Name: Your Full Name AKELLO ESTHER OKALANY*/
/* Registration Number 25/U/BIO/023/GV*/
/* Student  Number 2500800023 */

#include <stdio.h>

int main(void)
{
	float Amount,P,T, Fee; 
	//P = Transaction Fee Percentage
	//T = Total Amount to be deducted
	  
    //The user can choose a Transaction Fee Percentage depending on the range under which their amount falls.
	printf("Mobile Money Rates:\n 500-2500 0.04\n 2501-5000 0.02\n 5001-15000 0.033\n 15001-30000\n ");
	printf("30001-45000 0.017\n 45000-60000 0.0125\n Above 60000 0.01\n");
    
    printf("Enter Amount to send: ");
    scanf("%f", &Amount);
    
    printf("Transaction Fee Percentage; ");
    scanf("%f", &P);
    
    Fee = Amount * (P/100);
    
    printf("Transaction Fee is: %.2f\n", Fee);
    
    T = Fee + Amount;
    printf("Total Amount Deducted is: %.2f\n", T);
    
      printf("\n----- TRANSACTION SUMMARY -----\n");
    printf("Amount Sent: %.2f\n", Amount);
    printf("Fee: %.2f UGX\n", Fee);
    printf("Total Deducted: %.2f UGX\n", T);
    printf("--------------------------------\n");

    return 0;
}
