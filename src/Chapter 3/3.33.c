/*

3.33 
(Square of Asterisks) Write a program that reads in the side of a square and then prints that
square out of asterisks. Your program should work for squares of all side sizes between 1 and 20. For
example, if your program reads a size of 4, it should print

****
****
****
****

*/

#include <stdio.h>

int main ()

{

  int SideSquare = 0, /* size of side sqare */
      rows       = 1, /* here is stored rows value */
      columns    = 1; /* here is stored columns value */

  printf("\nInsert side square : "); scanf("%d", &SideSquare);
  /* while-loop end when columns value is bigger than SideSquare value*/
      while(rows <= SideSquare)

      {
      /* rows is the side of square */
          while(columns <= SideSquare) {
      
          printf("*");

          columns++;

        } /* end of second while-loop*/
  /* when the second while-loop is over printf print a new line */
      printf("\n");

      rows++;

      columns = 1;

      } /* end of the first while-loop */

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
