/*

3.25

(Tabular Output) Write a program that uses looping to print the following table of values.
Use the tab escape sequence, \t, in the printf statement to separate the columns with tabs.

N   10*N 100*N   1000*N
1   10   100     1000
2   20   200     2000
3   30   300     3000
4   40   400     4000
5   50   500     5000
6   60   600     6000
7   70   700     7000
8   80   800     8000
9   90   900     9000
10  100  1000    10000

*/


#include <stdio.h>

int main()

{

  int N = 1;

  printf("N\t10*N\t100*N\t1000*N\t\n\n");

  while(N <= 10) {

    printf("%d\t%d\t%d\t%d\n", N, N*10, N*100, N*1000);

    N++;

  }

  return 0;

}
