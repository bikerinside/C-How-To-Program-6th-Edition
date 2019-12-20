/*

3.35 

(Palindrome Tester) A palindrome is a number or a text phrase that reads the same backward
as forward. For example, each of the following five-digit integers is a palindrome: 12321,
55555, 45554 and 11611. Write a program that reads in a five-digit integer and determines whether
or not it’s a palindrome. [Hint: Use the division and remainder operators to separate the number
into its individual digits.]

*/

#include <stdio.h>

int main()

{

  int FirstDig,   /* int var first digit */
      SecondDig,  /* int var second digit */
      ThirdDig,   /* int var third digit */
      FourthDig,  /* int var fourth digit */
      FifthDig,   /* int var fifth digit */
      number;     /*int var five digit number */

  printf("Please insert a five digit integer: "); scanf("%d", &number);
/* next instruction separate the single digit from inserted five digit number*/
  FirstDig  = ( number / 10000 ) % 10;

  SecondDig = ( number / 1000 ) % 10;

  ThirdDig  = ( number / 100 ) % 10;

  FourthDig = ( number / 10 ) % 10;

  FifthDig  = number % 10;
/* Check if five digit number inserted is  palindrome */
  if(FirstDig == FifthDig)
    if(SecondDig == FourthDig) 
        printf("\n%d is Palindrome\n", number);

    else printf("\n%d is not Palindrome\n\a", number);

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
