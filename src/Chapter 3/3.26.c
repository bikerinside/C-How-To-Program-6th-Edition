/*

(Tabular Output) Write a program that utilizes looping to produce the following table of
values:

A A+2 A+4 A+6
3 5 7 9
6 8 10 12
9 11 13 15
12 14 16 18
15 17 19 21

*/

#include <stdio.h>

int main()

{

  int A = 3;

  printf("A\tA+2\tA+4\tA+6\t\n\n");

  while (A <= 15) {

    printf("%d\t%d\t%d\t%d\n", A, A+2,A+4,A+6);

    A += 3;

  }


}
