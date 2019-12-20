/*
3.24

(Find the Largest Number) The process of finding the largest number (i.e., the maximum
of a group of numbers) is used frequently in computer applications. For example, a program that
determines the winner of a sales contest would input the number of units sold by each salesperson.
The salesperson who sold the most units wins the contest. Write a pseudocode program and then a
program that inputs a series of 10 numbers and determines and prints the largest of the numbers.
[Hint: Your program should use three variables as follows]:

counter: A counter to count to 10 (i.e., to keep track of how many numbers have
been input and to determine when all 10 numbers have been processed)

number: The current number input to the program

largest: The largest number found so far

*/

#include <stdio.h>

int main()

{

  int Counter = 0, Number = 0, Largest = 0;

  printf("\n");

  while(Counter != 10) {

    printf("Enter the %d number : ", ++Counter); scanf("%d", &Number);

    if(Number >= Largest) Largest = Number;

  }

  printf("\n\aLargest = %d\n", Largest);

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
