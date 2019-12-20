/*

2.26 (Multiples)
Write a program that reads in two integers and determines and prints whether
the first is a multiple of the second. [Hint: Use the remainder operator.]

*/

#include <stdio.h>

int main()

{

  int x, y;

  printf("%s", "\nInsert two integers : "); scanf("%d%d", &x, &y);

  if( ( x % y ) == 0 ) printf("\n%d is a multiple of %d\n\n", x, y);

  if( ( x % y ) != 0 ) printf("\n%d is not a multiple of %d\n\n", x, y);

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
