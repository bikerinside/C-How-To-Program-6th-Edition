/*

3.34
(Hollow Square of Asterisks) Modify the program you wrote in Exercise 3.33 so that it
prints a hollow square. For example, if your program reads a size of 5, it should print

*****
*   *
*   *
*   *
*****

*/

#include <stdio.h>

int main ()

{

  int SideSquare = 0, /* size of side sqare */
      i       = 1, /* here is stored rows value */
      j       = 1; /* same here */

  printf("\nInsert side square : "); scanf("%d", &SideSquare);

  /* while-loop end when columns value is bigger than SideSquare value*/
  
  while(i <= SideSquare ) {

       j = 1;

    while(j <= SideSquare) {

      /* print left side */
      if(j == 1)
        if(i > 1)
          printf("*");

      /* print left side */
      if(j == SideSquare)
        if(i > 1)
          printf("*");
      /* print downside */
       if(i == SideSquare)
        if(j > 2)
          printf("*");

      /* print upperside */
       if(i == 1)
        if(j >= 1)
          printf("*");

      /* print blank space inside hollow square */

      if(i >= 2)
        if(j >= 2)
          if(i <= SideSquare - 1)
            if(j <= SideSquare - 1)
            printf(" ");

      j++;
    
    }

      i++;

      printf(" \n");

  }

return 0;

}