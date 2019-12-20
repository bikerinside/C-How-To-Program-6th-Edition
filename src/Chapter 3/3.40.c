/*

3.40
(Checkerboard Pattern of Asterisks) Write a program that displays the following checkerboard
pattern:

* * * * * * * *
  * * * * * * * *
* * * * * * * *
  * * * * * * * *
* * * * * * * *
  * * * * * * * *
* * * * * * * *
  * * * * * * * *

Your program must use only three output statements, one of each of the following forms:
printf( "* " );
printf( " " );
printf( "\n" ); 

*/

#include <stdio.h>

int main()

{

  int i = 1;

  while(i <= 120) {

    if( i % 2 == 0 ) printf(" ");

    if( i % 2 == 1 ) printf("* ");
        
    if(i % 15 == 0) printf("\n");

    i++;

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
