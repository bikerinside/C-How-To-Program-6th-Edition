/*

2.31 (Table of Squares and Cubes)

Using only the techniques you learned in this chapter,
write a program that calculates the squares and cubes of the numbers from 0 to 10 and
uses tabs to print the following table of values:

number square cube
0      0      0
1      1      1
2      4      8
3      9      27
4      16     64
5      25     125
6      36     216
7      49     343
8      64     512
9      81     729
10     100    1000

*/

#include <stdio.h>

int main ()

{

  printf("%s","\nnumber\tsquare\tcube\t");

  printf("\n%d\t%d\t%d\t", 0, 0*0, 0*0*0);

  printf("\n%d\t%d\t%d\t", 1, 1*1, 1*1*1);

  printf("\n%d\t%d\t%d\t", 2, 2*2, 2*2*2);

  printf("\n%d\t%d\t%d\t", 3, 3*3, 3*3*3);

  printf("\n%d\t%d\t%d\t", 4, 4*4, 4*4*4);

  printf("\n%d\t%d\t%d\t", 5, 5*5, 5*5*5);

  printf("\n%d\t%d\t%d\t", 6, 6*6, 6*6*6);

  printf("\n%d\t%d\t%d\t", 7, 7*7, 7*7*7);

  printf("\n%d\t%d\t%d\t", 8, 8*8, 8*8*8);

  printf("\n%d\t%d\t%d\t", 9, 9*9, 9*9*9);

  printf("\n%d\t%d\t%d\t", 10, 10*10, 10*10*10);

  printf("%s", "\n\n");

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
