/*
3.23

(Printing Numbers from a Loop) Write a program that utilizes looping to print the numbers
from 1 to 10 side by side on the same line with three spaces between numbers.

*/

#include <stdio.h>

int main()

{

  int i = 0;

  while(i != 10) {

  printf("%d   ", ++i);

}

}
