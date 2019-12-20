/*

4.15 

(Modified Compound-Interest Program) Modify the compound-interest program of
Section 4.6 to repeat its steps for interest rates of 5%, 6%, 7%, 8%, 9%, and 10%. Use a for loop
to vary the interest rate.

*/

#include <stdio.h>
#include <math.h>  

int main(void)
{
   double principal = 1000.0;
  
  for(double rate = .05 ; rate <= .10; rate += .01){

    printf("%4s%9s%28s\n","Rate", "Year", "Amount on deposit");

   for (unsigned int year = 1; year <= 10; ++year) {

      // calculate new amount for specified year
      double amount = principal * pow(1.0 + rate, year);

      printf("%.2f%% %4u%21.2f\n", rate, year, amount);
   
   }

   puts("");

  }

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

