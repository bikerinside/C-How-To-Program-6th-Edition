/*
 
 2.17
 (Final Velocity) Write a program than asks the user to enter the initial velocity and
 acceleration of an object, and the time that has elapsed, places them in the variables
 u, a, and t, and prints the final velocity, v, and distance traversed, s,
 using the following equations.
 
a) v = u + at

b) s = ut + 1/2at^2

*/

#include <stdio.h>

int main()

{   // variables definition
    
    float a, // a is used to store acceleration
    
          u, // u is used to store initial velocity
    
          t, // t is used to store time that has elapsed
    
          v, // v is used to store final velocity
    
          s; // s is uesd to store distance traversed
    
    
    printf("%s", "\nPlease enter acceleration > ");
    
    scanf("%f", &a );
    
    printf("%s", "\nPlease enter initial velocity > ");
    
    scanf("%f", &u);

    printf("%s", "\nPlease enter time elapsed > ");
    
    scanf("%f", &t);
    
    v = u + a * t;
    
    s = (u * t) + (0.5 * a * ( t * t)); // or s = (u * t) + (a * (t*t))/2
    
    printf("\nFinal Velocity = %.2f", v);
    
    printf("\nDistance traversed = %.2f\n\n", s);
    
    
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
