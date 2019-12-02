/*

3.18

(Credit Limit Calculator) Develop a C program that will determine if a department store
customer has exceeded the credit limit on a charge account. For each customer, the following facts
are available:
a) Account number
b) Balance at the beginning of the month
c) Total of all items charged by this customer this month
d) Total of all credits applied to this customer's account this month
e) Allowed credit limit
The program should input each of these facts, calculate the new balance (= beginning balance
+ charges – credits), and determine if the new balance exceeds the customer's credit limit. For those
customers whose credit limit is exceeded, the program should display the customer's account number,
credit limit, new balance and the message “Credit limit exceeded.” Here is a sample input/output
dialog:

Enter account number (-1 to end): 100
Enter beginning balance: 5394.78
Enter total charges: 1000.00
Enter total credits: 500.00
Enter credit limit: 5500.00
Account: 100
Credit limit: 5500.00
Balance: 5894.78
Credit Limit Exceeded.

Enter account number (-1 to end): 200
Enter beginning balance: 1000.00
Enter total charges: 123.45
Enter total credits: 321.00
Enter credit limit: 1500.00

Enter account number (-1 to end): 300
Enter beginning balance: 500.00
Enter total charges: 274.73
Enter total credits: 100.00
Enter credit limit: 800.00

Enter account number (-1 to end): -1

*/

#include <stdio.h>

int main ()

{

	float BegBal 	= 0.0, /*  beginning balance */
				TotCh 	= 0.0, /*  total charges 		 */
				TotCr 	=	0.0, /*  total credit 		 */
				CrLim 	=	0.0, /*  credit limit 		 */
				EndBal  = 0.0; /*  end balance 			 */

	int AccNo 		= 0,  /* account number */
			FlagVal		= 0; /* flag value */

	while(AccNo != -1) { /* beginning of first while-loop */

	if(FlagVal == 1) /* check if account number has inserted */

	{

		printf("Enter beginning balance : "); 	scanf("%f", &BegBal);

		printf("Enter total charges : "); 		scanf("%f", &TotCh);

		printf("Enter total credit : ");			scanf("%f", &TotCr);

		printf("Enter credit limit : ");			scanf("%f", &CrLim);

		EndBal = BegBal + TotCh - TotCr; /* calculate end balance with inserted data */

		if( EndBal > CrLim ) /* check if credit limit is Exceeded */

		{

			printf("\nAccount: %d", AccNo);

			printf("\nCredit limit = %.2f", CrLim);

			printf("\nBalance = %.2f", EndBal);

			printf("\nCredit Limit Exceed.\n");

		} /* end of second if-case */

	} /* end of first if-case */


	printf("\nEnter account number (-1 to end): "); scanf("%d", &AccNo);
	/* Ternary operator used for set right value to FlagVal */
	FlagVal = ( AccNo != -1) ? 1 : 0;

} /* end of the main while-loop */

if(FlagVal == 0) printf("\n\aNo number account inserted!\a\n");

return 0;

}/* end of the main function */
