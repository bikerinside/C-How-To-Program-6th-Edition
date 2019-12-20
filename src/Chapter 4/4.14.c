/*

4.14 

(Factorials) The factorial function is used frequently in probability problems. The factorial
of a positive integer n (written n! and pronounced “n factorial”) is equal to the product of the positive
integers from 1 to n. Write a program that evaluates the factorials of the integers from 1 to 5.
Print the results in tabular format. What difficulty might prevent you from calculating the factorial
of 20?

*/

#include <stdio.h>

int main()

{

  unsigned long long int fact = 1;

  puts("");

  for(int i = 1; i <= 20; i++) 
  
  {
      
      fact *= i;

      printf("%d!\t", i);
      
      printf("%llu\n", fact);

  }

  return 0;

}

/*

What difficulty might prevent you from calculating the factorial of 20?

A: The problem is where factorial get stored, specifically in which C data type,
the only C data type capable to store 20! is unsigned long long int, which is adopted since C99 standard.

*/


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

