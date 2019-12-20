/*

2.16
(Arithmetic) Write a program that asks the user to enter two numbers,
obtains them from theuser and prints their sum, product, difference,
quotient and remainder.

*/

#include <stdio.h>

int main()

{

    int x, y;
    // See note 1
    printf("%s", "\nPlease enter two integers\n> ");

    scanf("%d %d", &x, &y);

    // I don't need 5 variables because I don't need to save the results
    printf("\nSum : %d\n", x + y );

    printf("Product : %d\n", x * y );

    printf("Difference : %d\n", x - y );

    printf("Quotient: %d\n", x / y );

    printf("Remainder: %d\n\n", x % y );

    return 0;

}


/*

 I have used printf as according with secure programming,

 you should never use printf() only with one argument.

*/

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
