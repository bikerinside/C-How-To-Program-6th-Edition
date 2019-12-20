/*

4.13
(Natural Numbers Arithmetic) Write a program that prints the sum, the sum of the
squares, and the sum of the cubes of all natural numbers from 1 till any number entered by the user.

*/

#include <stdio.h>

int main()

{

  int n;

  int sum, SumSquares, SumCubes;
  /* init all sum variables */
  sum = SumSquares = SumCubes = 0;

  printf("%s", "\nInsert n : "); scanf("%d", &n);

  for(int i = 1; i <= n; i++)

  {

    sum += i;

    SumSquares += i * i;

    SumCubes += i * i * i;

  }

  printf("\nSum = %d\nSum of the squares = %d\nSum of the cubes = %d\n", sum, SumSquares, SumCubes);

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
