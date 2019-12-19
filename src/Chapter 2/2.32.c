/*

(Body Mass Index Calculator) We introduced the body mass index (BMI) calculator in
Exercise 1.12. The formulas for calculating BMI are

BMI = weightInKilograms / heightInMeters * heightInMeters

Create a BMI calculator application that reads the user’s weight in pounds and height in inches
(or, if you prefer, the user’s weight in kilograms and height in meters), then calculates and displays
the user’s body mass index. Also, the application should display the following information from
the Department of Health and Human Services/National Institutes of Health so the user can evaluate
his/her BMI:

BMI VALUES
Underweight: less than 18.5
Normal: between 18.5 and 24.9
Overweight: between 25 and 29.9
Obese: 30 or greater

[Note: In this chapter, you learned to use the int type to represent whole numbers. The BMI calculations
when done with int values will both produce whole-number results. In Chapter 4 you’ll
learn to use the double type to represent numbers with decimal points. When the BMI calculations
are performed with doubles, they’ll both produce numbers with decimal points—these are called
“floating-point” numbers.]

*/

#include <stdio.h>

int main()

{

  int WeightInKg, HeightInMeters;

  puts("");

  printf("%s", "Insert your weight in kg : "); scanf("%d", &WeightInKg);

  printf("%s", "Insert your height in mt : "); scanf("%d", &HeightInMeters);

  printf("%s %d\n", "Your BMI = ", WeightInKg/(HeightInMeters*HeightInMeters) );

  puts("");

  puts("BMI VALUES");

  puts("Underweight: less than 18.5");

  puts("Normal: between 18.5 and 24.9");

  puts("Overweight: between 25 and 29.9");

  puts("Obese: 30 or greater");

  return 0;

}

/*

#######################################
#                                     #
# Author: bikerinside                 #
#                                     #
# year : 2019                         #
#                                     #
# all rights reserved ©               #
#                                     #
#######################################

*/