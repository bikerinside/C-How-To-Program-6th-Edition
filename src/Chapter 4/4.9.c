/*

4.9
(Sum and Average of Integers) Write a program to sum a sequence of integers and calculate
their average. Assume that the first integer read with scanf specifies the number of values to
be entered. Your program should read only one value each time scanf is executed. A typical input
sequence might be

7 678 234 315 489 536 456 367

*/

#include <stdio.h>

int main()

{

  int  value  = 0, /* int variable used for read integers inserted by user */
       total  = 0, /* total variable is use to sum all integers inserted by user */
       NumVal = 0; /* NumVal is used to store the number of integer */

  printf("\n%s", "Insert the number of values : "); scanf("%d", &NumVal);

  for(int i = 0; i < NumVal; i++) {

    printf("Insert the %d-value: ", i+1 ); 
    
    scanf("%d", &value);

    total += value;

  }

  printf("\n%s %d", "Sum = ", total);
  /* a cast operator is used to calculate average */
  printf("\n%s %.2f", "Average = ", (float) total / (float) NumVal );

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
