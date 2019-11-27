/*

2.30
(Separating Digits in an Integer) Write a program that inputs one five-digit number,
separates the number into its individual digits and prints the digits separated from one another
by three spaces each. [Hint: Use combinations of integer division and the remainder operation.]
For example, if the user types in 42139, the program should print

4 2 1 3 9

*/

#include <stdio.h>

int main()

{

  int WholeNum, // here is stored the five digits number inserted by user
      FirstDig,
      SecondDig,
      ThirdDig,
      FourthDig,
      FifthDig;

printf("%s", "\nPlease, insert the five digits number : "); scanf("%d", &WholeNum);
// using a combination between integer division and reminder operation we can easly obtain the single digits
FirstDig  = ( WholeNum / 10000 ) % 10;

SecondDig = ( WholeNum / 1000 ) % 10;

ThirdDig  = ( WholeNum / 100 ) % 10;

FourthDig = ( WholeNum / 10 ) % 10;

FifthDig  = WholeNum % 10;

printf("\n%d %d %d %d %d\n\n", FirsDig, SecondDig, ThirhDig, FourthDig, FifthDig);

return 0;

}
