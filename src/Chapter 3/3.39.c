/*
3.39
(Counting 7s) Write a program that reads an integer and determines and prints how many
digits in the integer are 7s.

*/

#include <stdio.h>

int main()

{

  int Counter = 0, Number;

  printf("\nEnter a number: "); scanf("%d", &Number);

  while(Number > 0)

  {

    Number /= 10;

    if(Number == 7) Counter++;

  }

  printf("Number of 7 found : %d", Counter);

  return 0;

}