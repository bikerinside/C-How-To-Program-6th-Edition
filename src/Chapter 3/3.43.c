/*

3.43 

What is wrong with the following statement? Rewrite the statement to accomplish what the
programmer was probably trying to do.
printf( "%d", ++( x + y ) );

*/

#include<stdio.h>

int main()

{

  int x = 0, y = 0, z;

  z = x + y;

  printf("%d", ++z );

  return 0;

}