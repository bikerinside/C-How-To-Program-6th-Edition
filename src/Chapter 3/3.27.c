/*

(Find the Two Largest Numbers) Using an approach similar to Exercise 3.24, find the two
largest values of the 10 numbers. [Note: You may input each number only once.]

*/

#include <stdio.h>

int main()

{

  int Counter       = 0,
      Number        = 0,
      Largest       = 0,
      SecondLargest = 0;

  printf("\n");

  while(Counter != 10) {

    printf("Enter the %d number : ", ++Counter); scanf("%d", &Number);

    if(Number >= Largest)

    {
      
      SecondLargest = Largest;

      Largest = Number;

    }

  }

  printf("\n\aLargest = %d\n", Largest);

  printf("Second Largest = %d\n", SecondLargest);

  return 0;

}
