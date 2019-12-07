/*

3.40
(Checkerboard Pattern of Asterisks) Write a program that displays the following checkerboard
pattern:

* * * * * * * *
  * * * * * * * *
* * * * * * * *
  * * * * * * * *
* * * * * * * *
  * * * * * * * *
* * * * * * * *
  * * * * * * * *

Your program must use only three output statements, one of each of the following forms:
printf( "* " );
printf( " " );
printf( "\n" ); 

*/

#include <stdio.h>

int main()

{

  int i = 1;

  while(i <= 120) {

    if( i % 2 == 0 ) printf(" ");

    if( i % 2 == 1 ) printf("* ");
        
    if(i % 15 == 0) printf("\n");

    i++;

  }

  return 0;

}