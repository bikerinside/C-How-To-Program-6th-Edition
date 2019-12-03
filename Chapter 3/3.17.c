/*

3.17

(Gas Mileage) Drivers are concerned with the mileage obtained by their automobiles.
One driver has kept track of several tankfuls of gasoline by recording miles driven and gallons used for each tankful.
Develop a program that will input the miles driven and gallons used for each tankful.
The program should calculate and display the miles per gallon obtained for each tankful.
After processing all input information, the program should calculate and print the combined miles per gallon obtained
for all tankfuls. Here is a sample input/output dialog:

Enter the gallons used (-1 to end): 12.8
Enter the miles driven: 287
The miles / gallon for this tank was 22.421875

Enter the gallons used (-1 to end): 10.3
Enter the miles driven: 200
The miles / gallon for this tank was 19.417475

Enter the gallons used (-1 to end): 5
Enter the miles driven: 120
The miles / gallon for this tank was 24.000000

Enter the gallons used (-1 to end): -1

The overall average miles/gallon was 21.601423

*/



#include <stdio.h>

int main()

{

  float Gallons             = 0.0,
        TotalGallons        = 0.0,
        Miles               = 0.0,
        TotalMiles          = 0.0;
/* flag value */
    int flag                = 0;

  while ( Gallons != -1 ) {
  /* flag var check if a first value is inserted */
      if(flag == 1) {

        printf("%s", "Enter miles  driven : ");

        scanf("%f", &Miles);
/* miles value is added to var TotalMiles */
        TotalMiles += Miles;
/* same for gallons */
        TotalGallons += Gallons;

        printf("The miles / gallon for this tank was = %f\n\n", Miles / Gallons);

    } /* end of first if */

      printf("%s", "\nEnter gallons used (-1 to end) : ");

      scanf("%f", &Gallons);

      flag = (Gallons != -1) ? 1 : 0;

  } /* end of while-loop */
  /* The second if-case check if there are any value inserted*/
  if (Miles / Gallons == 0) printf("\n\aNo value inserted!\n\a");

  else printf("\nThe overall averange miles/gallon was = %f\n", TotalMiles / TotalGallons);

  return 0;

}
