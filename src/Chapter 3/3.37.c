/*

3.37 

(How Fast is Your Computer?) How can you determine how fast your own computer really
operates? Write a program with a while loop that counts from 1 to 300,000,000 by 1s. Every time
the count reaches a multiple of 100,000,000, print that number on the screen. Use your watch to
time how long each 100 million repetitions of the loop takes.

*/

#include <stdio.h>

int main()

{

  int Counter = 1;

  while( Counter <= 3000000 )

  {

      if( Counter % 1000000 == 0 ) printf("%d\n", Counter);

      Counter++;

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
