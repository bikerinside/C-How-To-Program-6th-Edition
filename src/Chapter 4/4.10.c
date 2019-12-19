/*

4.10 (Conversion Celsius to Fahrenheit) Write a program that converts temperatures from 30 C
to 50 C to the Fahrenheit scale. The program should print a table displaying temperatures in the
two scales side by side. [Hint: F = 9/5 * C + 32]

*/

#include <stdio.h>

int main()

{

  for(int temp = 30; temp <= 50; temp++){ 
  
  printf("\n%.2fC %.2fF", (float)temp, (((float)9/(float)5 * (float)temp) + 32) );

  }

  puts("");

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