/*

3.43 

What is wrong with the following statement? Rewrite the statement to accomplish what the
programmer was probably trying to do.
printf( "%d", ++( x + y ) );

*/

#include<stdio.h>

int main()

{

  int x = 0, y = 0, z;

  z = x + y;

  printf("%d", ++z );

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
