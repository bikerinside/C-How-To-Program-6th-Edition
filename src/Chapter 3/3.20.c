/*

3.20
(Interest Calculator) The simple interest on a loan is calculated by the formula
interest = Principal * Rate * days / 365;

The preceding formula assumes that Rate is the annual interest Rate, and therefore includes the
division by 365 (days). Develop a program that will input Principal, Rate and days for several
loans, and will calculate and display the simple interest for each loan, using the preceding formula.
Here is a sample input/output dialog:

Enter loan Principal (-1 to end): 1000.00
Enter interest Rate: .1
Enter term of the loan in days: 365
The interest charge is $100.00

Enter loan Principal (-1 to end): 1000.00
Enter interest Rate: .08375
Enter term of the loan in days: 224
The interest charge is $51.40

Enter loan Principal (-1 to end): 10000.00
Enter interest Rate: .09
Enter term of the loan in days: 1460
The interest charge is $3600.00

Enter loan Principal (-1 to end): -1

*/


#include <stdio.h>

int main()

{

  float Principal  = 0.0,
        Rate       = 0.0;

  int   Days       = 0,
        DummyVal   = 0;

  while( Principal != -1) {

    if(DummyVal == 1)

    {

      printf("%s", "Enter interest Rate: ");            scanf("%f", &Rate);

      printf("%s", "Enter term of the loan in days: "); scanf("%d", &Days);

      printf("The interest charge is $%.2f\n", ( Principal * Rate * Days) / 365);

    } /* end of first if case */

    printf("%s", "\nEnter loan Principal (-1 to end): "); scanf("%f", &Principal);

    DummyVal = (Principal != -1) ? 1 : 0;

  }/* end of main while */

  return 0;

}

/**************************************************************************
 * (C) Copyright 2019 by bikerinside                                      *
 *                                                                        *
 * DISCLAIMER:                                                            *
 * The author make no warranty of any kind, expressed or implied,         *
 * with regard to these programs.                                         *
 * The author shall not be liable in any event for incidental or          *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
