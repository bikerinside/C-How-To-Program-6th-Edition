/*

3.36 

(Printing the Decimal Equivalent of a Binary Number) Input an integer containing only
0s and 1s (i.e., a “binary” integer) and print its decimal equivalent. [Hint: Use the remainder and
division operators to pick off the “binary” number’s digits one at a time from right to left. Just as in
the decimal number system, in which the rightmost digit has a positional value of 1, and the next
digit left has a positional value of 10, then 100, then 1000, and so on, in the binary number system
the rightmost digit has a positional value of 1, the next digit left has a positional value of 2, then 4,
then 8, and so on. Thus the decimal number 234 can be interpreted as 4 * 1 + 3 * 10 + 2 * 100.
The decimal equivalent of binary 1101 is 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8 or 1 + 0 + 4 + 8 or 13.]

*/

#include <stdio.h>

int main()

{

  int BinaryNum,    = 0,  /* here is stored binary number inserted by user */
      BinaryNumCopy = 0,  /* here is stored a copy of binary number inserted */
      BinaryDig     = 0,  /* here is stored single digit of binary number */
      Div           = 1,  /* in Div var is stored the value that divide binary number to obtain single digit */
      PowerTwo      = 1,  /* PowerTwo is store power of two value */
      ConvNum       = 0,  /* here is stored the value in decimal of binary number */
      Counter       = 0;  /* Counter store the number of digit obtanied from inserted binary number */

  printf("Insert binary number: "); scanf("%d", &BinaryNum);
  /* Need a copy of binary number inserted by user */
  BinaryNumCopy = BinaryNum;
  /* The first while-loop count how many digits, the bianry number inserted by user has */
   while( BinaryNumCopy > 0 )
  /* this while loop will stop when division between BinaryNumCopy and 10 is egual to 0 */
   {/* means that digits are over */

     BinaryNumCopy /= 10;
    /* Counter count digits of BinaryNumber */
     Counter++;

   } /* end of the first while-loop */

  while( Counter > 0 )
  /* while-loop ends when Counter is equal to 0 that means that there are no more digits to convert */
  {
      /* BinaryNum will be divided by 1,10,100... and than modulo operation will calculate the single digit  */
      BinaryDig = ( BinaryNum / Div ) % 10;
      /* Once obtained single digit the value will be multiplicated by 1,2,4,8,16... value that is store in PowerTwo */
      ConvNum += BinaryDig * PowerTwo;
      /* increment by 2 var PowerTwo */
      PowerTwo *= 2;
      /* same but by 10 for var Div */
      Div *= 10;
      /* Counter is decremented because one digit has been converted */
      Counter--;

  }

  printf("\nIn decimals = %d\n", ConvNum);

  return 0;


}
