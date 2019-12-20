/*

2.18 (Comparing Values)
Write a program that asks the user to enter the highest
rainfall ever in one season for a country, and the rainfall in the current year
for that country, obtains the values from the user, checks if the current
rainfall exceed the highest rainfall and prints an appropriate message on the
screen. If the current rainfall is higher, it assigns
that value as the highest rainfall ever. Use only the single-selection form of
the if statement you learned in this chapter.

*/

#include <stdio.h>

int main()

{

  float Current_Rainfall,

        Highest_Rainfall,

        Grow_Rate;

    printf("%s","Please enter the highest rainfall in one season: ");

    scanf("%f", &Highest_Rainfall);

    printf("%s","\nPlease enter rainfall in the current year: ");

    scanf("%f", &Current_Rainfall);

    Grow_Rate = (( Current_Rainfall - Highest_Rainfall ) / Highest_Rainfall ) * 100;

    if(  Grow_Rate >= 1 ) 
      if( Grow_Rate <= 50  )
          Highest_Rainfall = Current_Rainfall;

    if ( Grow_Rate >= 51 )
      if( Grow_Rate < 100 )
          puts("\nThis rainfall exceed the highest rainfall in this year!");

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
