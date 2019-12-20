/*

3.39

(Counting 7s) Write a program that reads an integer and determines and prints how many
digits in the integer are 7s.

*/

#include <stdio.h>

int main()

{

  int Num           = 0,  /* here is stored number inserted by user */
      NumCopy       = 0,  /* here is stored a copy of number inserted */
      NumDig        = 0,  /* here is stored single digit of number */
      Div           = 1,  /* in Div var is stored the value that divide  number to obtain single digit */
      Counter       = 0,  /* Counter store the number of digit obtanied from inserted  number */
      CounterSeven  = 0;

  printf("\nInsert number: "); scanf("%d", &Num);
  /* Need a copy of number inserted by user */
  NumCopy = Num;
  /* The first while-loop count how many digits, the number inserted by user has */
   while( NumCopy > 0 )
  /* this while loop will stop when division between NumCopy and 10 is egual to 0 */
   {/* means that digits are over */

     NumCopy /= 10;
    /* Counter count digits of Number */
     Counter++;

   } /* end of the first while-loop */

  while( Counter > 0 )
  /* while-loop ends when Counter is equal to 0 that means that there are no more digits to check */
  {
      /* Num will be divided by 1,10,100... and than modulo operation will calculate the single digit  */
      NumDig = ( Num / Div ) % 10;
      /* CounterSeven is postincremented if the digit store in NumDig is equal to 7 */
      if(NumDig == 7) CounterSeven++;
      /* same but by 10 for var Div */
      Div *= 10;
      /* Counter is decremented because digit has been checked by if-case */
      Counter--;

  }

  printf("Number of 7 found in %d = %d\n", Num, CounterSeven);

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
