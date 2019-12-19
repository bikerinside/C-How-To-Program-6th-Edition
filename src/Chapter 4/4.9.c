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

  int  value  = 0,
       total  = 0,
       NumVal = 0;

  printf("\n%s", "Insert the number of values : "); scanf("%d", &NumVal);

  for(int i = 0; i < NumVal; i++) {

    printf("Insert the %d-value: ", i+1 ); 
    
    scanf("%d", &value);

    total += value;

  }

  printf("\n%s %d", "Sum = ", total);

  printf("\n%s %.2f", "Average = ", (float) total / (float) NumVal );

  return 0;
  
}
