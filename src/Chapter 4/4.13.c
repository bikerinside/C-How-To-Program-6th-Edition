/*

4.13
(Natural Numbers Arithmetic) Write a program that prints the sum, the sum of the
squares, and the sum of the cubes of all natural numbers from 1 till any number entered by the user.

*/

#include <stdio.h>

int main()

{

  int n;

  int sum, SumSquares, SumCubes;

  printf("%s", "\nInsert n : "); scanf("%d", &n);

  for(int i = 1; i <= n; i++)

  {

    sum += i;

    SumSquares += i * i;

    SumCubes += i * i * i;

  }

  printf("\nSum = %d\nSum of the squares = %d\nSum of the cubes = %d\n", sum, SumSquares, SumCubes);

  return 0;

}