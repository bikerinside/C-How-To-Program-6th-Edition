/*

2.23
(Largest and Smallest Integers) Write a program that reads in three integers and then determines
and prints the largest and the smallest integers in the group. Use only the programming techniques
you have learned in this chapter.

*/

#include <stdio.h>

int main()

{

  int min, // Smallest int
      max, // Largest int
      a, b, c, d, e; // five integers

  printf("%s", "Insert five integers please : "); scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

  min = a; // we are assuming that in a is stored the smallest of the five integers

  if( b < min ) min = b;
  if( c < min ) min = c;
  if( d < min ) min = d;
  if( e < min ) min = e;

  printf("\nSmallest = %d\n", min);

  max = a; // we are assuming that in a is stored the largest of the five integers

  if( b > max ) max = b;
  if( c > max ) max = c;
  if( d > max ) max = d;
  if( e > max ) max = e;

  printf("\nLargest = %d\n", max);

  return 0;

}
