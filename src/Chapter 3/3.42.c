/*

3.42 

(Diameter, Circumference and Area of a Cirle) Write a program that reads the radius of a
circle (as a float value) and computes and prints the diameter, the circumference and the area. Use
the value 3.14159 for π.

*/

#include <stdio.h>

int main()

{

  float radius;

  printf("%s", "Insert the radius of circle : "); scanf("%f", &radius);
  // d = C/π
  printf("\nDiameter = %.2f\n", (2* 3.14159 * radius)/3.14159);
  // C = 2 * π * radius
  printf("Circumference = %.2f\n", 2 * 3.14159 * radius );
  // A = π * r * r
  printf("Area = %.2f\n", 3.14159 * (radius * radius));

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
