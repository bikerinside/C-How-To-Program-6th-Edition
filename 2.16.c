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

    puts("");
    // I don't need 5 variables because I don't need to save the results
    printf("Sum : %d\n", x + y );

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
