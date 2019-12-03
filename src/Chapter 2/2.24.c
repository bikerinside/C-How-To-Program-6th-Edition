/*

2.24

(Odd or Even) Write a program that reads an integer and determines and prints whether it’s odd or even.
[Hint: Use the remainder operator. An even number is a multiple of two.
Any multiple of two leaves a remainder of zero when divided by 2.]

*/

#include <stdio.h>

int main()

{

  int MyNum;

  printf("%s", "Please insert a number : "); scanf("%d", &MyNum);

  if( MyNum % 2 == 0 ) printf("\n%d is Even\n\n", MyNum);

  if( MyNum % 2 == 1 ) printf("\n%d is Odd\n\n", MyNum);

  return 0;

}
