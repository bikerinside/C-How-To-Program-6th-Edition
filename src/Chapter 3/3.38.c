/*

3.38 

Write a program that prints 100 asterisks, one at a time. After every tenth asterisk, your program
should print a newline character. [Hint: Count from 1 to 100. Use the remainder operator to
recognize each time the counter reaches a multiple of 10.]

*/

#include <stdio.h>

int main()

{

  int Counter = 1;

  while(Counter <= 100) {

    printf("*");

    if(Counter % 10 == 0) printf("\n");

    Counter++;

  }

  return 0;

}