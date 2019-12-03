/*

2.26 (Multiples)
Write a program that reads in two integers and determines and prints whether
the first is a multiple of the second. [Hint: Use the remainder operator.]

*/

#include <stdio.h>

int main()

{

  int x, y;

  printf("%s", "\nInsert two integers : "); scanf("%d%d", &x, &y);

  if( ( x % y ) == 0 ) printf("\n%d is a multiple of %d\n\n", x, y);

  if( ( x % y ) != 0 ) printf("\n%d is not a multiple of %d\n\n", x, y);

  return 0;

}
