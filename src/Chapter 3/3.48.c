/*

3.48

(Target-Heart-Rate Calculator) While exercising, you can use a heart-rate monitor to see
that your heart rate stays within a safe range suggested by your trainers and doctors. According to the
American Heart Association (AHA) (www.americanheart.org/presenter.jhtml?identifier=4736),
the formula for calculating your maximum heart rate in beats per minute is 220 minus your age in
years. Your target heart rate is a range that is 50–85% of your maximum heart rate. [Note: These formulas
are estimates provided by the AHA. Maximum and target heart rates may vary based on the
health, fitness and gender of the individual. Always consult a physician or qualified health care professional
before beginning or modifying an exercise program.] Create a program that reads the user’s
birthday and the current day (each consisting of the month, day and year). Your program should calculate
and display the person’s age (in years), the person’s maximum heart rate and the person’s target
heart rate range.

*/

#include <stdio.h>

int main ()

{

  int CYear, CMonth, CDay;

  int BYear, BMonth, BDay;

  int Age, MaxHRT;

  float TargetRate;

  printf("\nInsert current data(MM-DD-YYYY) : "); scanf("%d%d%d", &CMonth, &CDay, &CYear);

  printf("\nInsert birthday person(MM-DD-YYYY) : "); scanf("%d%d%d", &BMonth, &BDay, &BYear);

  Age = CYear - BYear;

  MaxHRT = 220 - Age;

  TargetRate  = MaxHRT * 0.65;

  printf("\nFor age %d Maxium heartrate is %d\nTarget heartrate is %.2f \n", Age, MaxHRT, TargetRate);

  return 0;

}
