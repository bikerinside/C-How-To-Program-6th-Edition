/*
3.46 

(Factorial) The factorial of a nonnegative integer n is written n! (pronounced “n factorial”)
and is defined as follows:
n! = n · (n - 1) · (n - 2) · … · 1 (for values of n greater than or equal to 1)

and
n! = 1 (for n = 0).
For example, 5! = 5 · 4 · 3 · 2 · 1, which is 120.

a) Write a program that reads a nonnegative integer and computes and prints its factorial.

b) Write a program that estimates the value of the mathematical constant e by using the
formula:

e = 1 + /1! + 1/2! + 1/3! + ..

c) Write a program that computes the value of e^x by using the formula

e^x = 1 + x/1! + x^2/2! + x^3/3!

*/

#include <stdio.h>

int main()

{

  float n = 0.0, e = 0.0, factorial = 1.0, accuracy;

  printf("\nInsert n : "); scanf("%f", &accuracy);

  while(n <= accuracy)

  {

    if(n == 0) factorial *= 1.0;

    else factorial *= n;

    printf("\nfactorial = %f - n = %f\n", factorial, n);

    e += 1.0/factorial;

    n++;

  }

  printf("\n %f ", e);

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
