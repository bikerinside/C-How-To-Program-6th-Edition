/*

3.45

(Sides of a Right Triangle) Write a program that reads three nonzero integers and determines
and prints if they could be the sides of a right triangle.

Approach:

*/

#include <stdio.h>

int main()

{

  int a = 0, b = 0, c = 0;

  while (a <= 0){ printf("\nInsert first non zero value : "); scanf("%d", &a); }

  while (b <= 0){ printf("\nInsert second non zero value : "); scanf("%d", &b); }

  while (c <= 0){ printf("\nInsert third non zero value : "); scanf("%d", &c); }

  if( a * a + b * b == c * c) printf("\nInserted values can represent the sides of right triangle\n");
  
  else if( b * b + c * c == a * a ) printf("\nInserted values can represent the sides of right triangle\n");

  else if( a * a + c * c == b * b ) printf("\nInserted values can represent the sides of right triangle\n");

  else printf("\nInserted values cannot represent the sides of triangle!\a\n");
    
  return 0;

}