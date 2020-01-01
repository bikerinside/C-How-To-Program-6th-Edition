/*

4.18 

(Bar-Chart Printing Program) One interesting application of computers is drawing graphs
and bar charts. Write a program that reads five numbers (each between 1 and 30). For each number
read, your program should print a line containing that number of adjacent asterisks. For example,
if your program reads the number seven, it should print *******.

*/

#include <stdio.h>

int main()

{

  int i, j, NumAst;

  

    for (i = 0; i < 5; i++)

    {

      printf("Insert a number 1 < n < 30 "); scanf("%d", &NumAst);

      if(NumAst >= 1 && NumAst <= 30) {

      for(j = 0; j < NumAst; j++) printf("*");

      printf("\n");

    }

  else printf("Number of asterisk inserted is not correct!\n\a");

 }

  return 0;

}