/*

2.20 (Converting from seconds to hours, minutes and seconds)

Write a program that asks the user to enter the total time elapsed, in seconds,

since an event and converts the time to hours, minutes and seconds.

The time should be displayed as hours:minutes:seconds. [Hint: Use the remainder operator]

*/


#include <stdio.h>

int main()

{

  //int Total_Second;

  int Hrs, Min, Sec;

  printf("%s", "Enter the time elpsed in seconds: ");

  scanf("%d", &Sec);

  Min = Sec / 60;

  Hrs = Min / 60;

  if(Min >= 60)

  {

    Min %=  60;

    Hrs = Min / 60;

  }

  

  printf("0%d:0%d:0%d ", Hrs, Min, Sec);

}
