/*
(Salary Calculator) Develop a program that will determine the gross pay for each of several
employees. The company pays “straight time” for the first 40 hours worked by each employee and
pays “time-and-a-half” for all hours worked in excess of 40 hours. You’re given a list of the employees
of the company, the number of hours each employee worked last week and the hourly rate of
each employee. Your program should input this information for each employee, and should determine
and display the employee's gross pay. Here is a sample input/output dialog:

Enter # of hours worked (-1 to end): 39
Enter hourly rate of the worker ($00.00): 10.00
Salary is $390.00

Enter # of hours worked (-1 to end): 40
Enter hourly rate of the worker ($00.00): 10.00
Salary is $400.00

Enter # of hours worked (-1 to end): 41
Enter hourly rate of the worker ($00.00): 10.00
Salary is $415.00

Enter # of hours worked (-1 to end): -1

*/


#include <stdio.h>

int main()

{

  int     WorkHours   = 0,
          FlagValue   = 0;

  float   HrsRate     = 0.0;

  while ( WorkHours != -1 )

  {
  /* the if-case check if WorkHours value has entered */
    if(FlagValue == 1)

    {

      printf("Enter hourly rate of the worker ($00.00): "); scanf("%f", &HrsRate);

      if(WorkHours > 40) printf("Salary is  $%.2f\n", (40 * HrsRate) + (WorkHours - 40 ) * ( HrsRate * 1.50 ) );

      else  printf("Salary is  $%.2f\n", WorkHours * HrsRate);

    } /* end of first if-case */

    printf("\nEnter # of hours worked (-1 to end): "); scanf("%d", &WorkHours);
    /* if user insert -1 value the programm will terminate */
    if(WorkHours != -1) FlagValue = 1;

  } /* end of mail while-loop */

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
