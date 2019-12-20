/*

2.20 (Diameter, Circumference and Area of a Circle) Write a program that reads
in the radius of a circle and prints the circle’s diameter,
circumference and area. Use the constant value 3.14159 for π.
Perform each of these calculations inside the printf statement(s) and
use the conversion specifier %f. [Note: In this chapter, we’ve discussed
only integer constants and variables. In Chapter 3 we’ll discuss floating-point numbers,
i.e., values that can have decimal points.]

*/

#include <stdio.h>

int main()

{

  int radius;

  printf("%s", "Insert the radius of circle : "); scanf("%d", &radius);
  // d = C/π
  printf("\nDiameter = %f\n", (2* 3.14159 * radius)/3.14159);
  // C = 2 * π * radius
  printf("Circumference = %f\n", 2 * 3.14159 * radius );
  // A = π * r * r
  printf("Area = %f\n", 3.14159 * (radius * radius));

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
