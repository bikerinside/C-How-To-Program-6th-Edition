/*

4.16 

(Triangle-Printing Program) Write a program that prints the following patterns separately,
one below the other. Use for loops to generate the patterns. All asterisks (*) should be printed by a
single printf statement of the form printf("%s", "*"); (this causes the asterisks to print side by
side). [Hint: The last two patterns require that each line begin with an appropriate number of
blanks.]

(A)                 (B)            (C)                  (D)
*                   **********     **********                     *
**                  *********       *********                    **
***                 ********         ********                   ***
****                *******           *******                  ****
*****               ******             ******                 *****
******              *****               *****                ******
*******             ****                 ****               *******
********            ***                   ***              ********
*********           **                     **             *********
**********          *                       *            **********

*/

#include <stdio.h>

int main()

{

  int line, asterisk, space;
/* Print pattern (A) */

printf("\n%s\n","(A)");

  for( line = 1; line <= 10; line++) {

    for( asterisk = 1; asterisk <= line; asterisk++)  printf("%s","*");

    puts("");

  }

  puts("");

printf("%s\n","(B)");
/* Print pattern (B) */
  for(line = 10; line >= 1; line--) {

    for(asterisk = 1; asterisk <= line; asterisk++) printf("%s","*");

    puts("");

  }

  puts("");

printf("%s\n","(C)");
/* Print pattern (C) */
  for(line = 1; line <= 10; line++) {

    for( space = 1; space <= line; space++) printf("%s"," ");

    for( asterisk = 1; asterisk <= 11-line; asterisk++ ) printf("%s","*");

    puts("");

  }

  puts("");

printf("%s\n","(D)");
  /* Print pattern (D) */
  for(line = 1; line <= 10; line++) {

    for(space = 1; space <= 11-line ; space++) printf("%s"," ");

    for(asterisk = 1; asterisk <= line; asterisk++) printf("%s","*");

    puts("");

  }

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