/*

3.44

(Sides of a Triangle) Write a program that reads three nonzero float values and determines
and prints if they could represent the sides of a triangle.

Approach:

A triangle is valid if sum of its two sides is greater than the third side. 
If three sides are a, b and c, then three conditions should be met.

1.a + b > c 

2.a + c > b

3.b + c > a 

*/

#include <stdio.h>

int main()

{

  float a = 0, b = 0, c = 0;

  while (a <= 0){ printf("\nInsert first non zero value : "); scanf("%f", &a); }

  while (b <= 0){ printf("\nInsert second non zero value : "); scanf("%f", &b); }

  while (c <= 0){ printf("\nInsert third non zero value : "); scanf("%f", &c); }

  if( a + b > c)
    if(a + c  > b)
      if(b + c > a)
          printf("\nInserted values can represent the sides of triangle\n");

      else
        printf("\nInserted values cannot represent the sides of triangle!\a\n");
      
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
