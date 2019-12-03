/*
3.28

(Validating User Input) Modify the program in Figure 3.10 to validate its inputs.
On any input, if the value entered is other than 1 or 2,
keep looping until the user enters a correct value.
*/

#include <stdio.h>

int main( void )
{
 
   int passes = 0; 
   int failures = 0; 
   int student = 1;
   int result; 
   
   while ( student <= 10 ) {
    
      printf( "Enter result ( 1=pass,2=fail ): " );  scanf( "%d", &result );
 
      if ( result == 1 ) {
         passes = passes + 1;

         student = student + 1;
      } /* end if */

      else if (result == 2) { /* otherwise, increment failures */
         failures = failures + 1;

         student = student + 1; /* increment student counter */
      } /* end else if*/
   /*if user insert incorrect input the program will ask for correct input*/
      else printf("\nInsert correct input\n\a");

   } /* end while */

   /* termination phase; display number of passes and failures */
   printf( "Passed %d\n", passes );
   printf( "Failed %d\n", failures );

   if ( passes > 8 ) {
      printf( "Bonus to instructor!\n" );
   } /* end if */

   return 0;
}
