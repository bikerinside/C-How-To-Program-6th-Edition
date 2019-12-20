/*

3.41 
(Multiples of 2 with an Infinite Loop) Write a program that keeps printing the multiples of
the integer 2, namely 2, 4, 8, 16, 32, 64, and so on. Your loop should not terminate (i.e., you should
create an infinite loop). What happens when you run this program?

*/

#include <stdio.h>

int main()

{

  long counter = 0, power = 2;

  while(counter != -1) {

  printf("%d\n", power);

  power *= 2;

  counter++;

  }

  return 0;

}

/* Program will disply zero's because int type can't manage integers bigger than +32,767 */

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
