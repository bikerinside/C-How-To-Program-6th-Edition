/*
3.46 

(Factorial) The factorial of a nonnegative integer n is written n! (pronounced “n factorial”)
and is defined as follows:
n! = n · (n - 1) · (n - 2) · … · 1 (for values of n greater than or equal to 1)

and
n! = 1 (for n = 0).
For example, 5! = 5 · 4 · 3 · 2 · 1, which is 120.

a) Write a program that reads a nonnegative integer and computes and prints its factorial.

b) Write a program that estimates the value of the mathematical constant e by using the
formula:

e = 1 + /1! + 1/2! + 1/3! + ..

c) Write a program that computes the value of e^x by using the formula

e^x = 1 + x/1! + x^2/2! + x^3/3!

*/

#include <stdio.h>

int main()

{

    int i; 

    float sum, x = 1.0f;
    /* set accuracy */
    printf("Insert n: "); scanf("%d", &i);
    /* set x */
    printf("Insert x: "); scanf("%f", &x);

    while( i > 0 ) { 

      sum = 1 + x * sum / i; 

      i--;

    }

    printf("e^%f = %f", x, sum); 

    return 0; 

}

/*

Approach:

The value of Exponential Function e^x can be expressed using following Taylor Series.
So the series can be re-written as: 

e^x = 1 + (x/1) (1 + (x/2) (1 + (x/3) (........) ) ) 

*/