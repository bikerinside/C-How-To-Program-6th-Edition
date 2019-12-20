/*

2.33 (Car-Pool Savings Calculator) 

Research several car-pooling websites. 
Create an application that calculates your daily driving cost, so that you can estimate how much money could be saved by
car pooling, which also has other advantages such as reducing carbon emissions and reducing traffic
congestion. The application should input the following information and display the user’s cost per
day of driving to work:

a) Total miles driven per day.
b) Cost per gallon of gasoline.
c) Average miles per gallon.
d) Parking fees per day.
e) Tolls per day.

*/

#include <stdio.h>

int main()

{

  int TotalMilesDay,
      GasCostGal,
      AvrMilesGal,
      ParkFeesDay,
      ToolsDay;

  printf("%s", "Enter total miles driven per day : "); scanf("%d", &TotalMilesDay);

  printf("%s", "Enter Cost per gallon of gasoline : "); scanf("%d", &GasCostGal);

  printf("%s", "Enter average miles per gallon : "); scanf("%d", &AvrMilesGal);

  printf("%s", "Enter parking fees per day : "); scanf("%d", &ParkFeesDay);

  printf("%s", "Enter tools per day : "); scanf("%d", &ToolsDay);
   // https://www.tps.ucsb.edu/commuter-cost-calculator
  printf("\nDaily cost to go work = $%d",(((TotalMilesDay*2)/AvrMilesGal)*GasCostGal) + ParkFeesDay + ToolsDay);

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
