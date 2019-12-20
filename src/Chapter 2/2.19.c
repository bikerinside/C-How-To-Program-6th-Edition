/*

2.19 
(Arithmetic, Largest Value and Smallest Value)
Write a program that inputs three different integers
from the keyboard, then prints the sum, the average, the product, the smallest and the largest of
these numbers.
Use only the single-selection form of the if statement you learned in this chapter.
The screen dialogue should appear as follows:

Enter three different integers: 13 27 14
Sum is 54
Average is 18
Product is 4914
Smallest is 13
Largest is 27

*/

#include <stdio.h>

int main ()

{

  int a, b, c;

  int Smallest,
      Largest;

  printf("Please insert three number : ");

  scanf("%d %d %d", &a, &b, &c );

  printf("\nSum is %d\n", a + b + c );

  printf("Average is %d\n", (a + b + c) / 3);

  printf("Product is %d\n", a * b * c );

  if(a > b && a > c) Largest = a;

  if(a < b && a < c) Smallest = a;

  if(b > a && b > c) Largest = b;

  if(b < a && b < c) Smallest = b;

  if(c > a && c > b) Largest = c;

  if(c < a && c < b) Smallest = c;

  printf("Smallest is %d\n", Smallest);

  printf("Largest is %d\n\n", Largest);

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
