/*

Write a program to read “n” value and to print multiplication chart . 
Note: use “\t” while printing numbers.
Input : 
Enter n value:5
Output: 
1       2       3       4       5
2       4       6       8       10
3       6       9       12     15
4       8       12      16    20
5       10     15      20    25

*/

#include<stdio.h>
void main()
{
 int i,j,n;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n;j++)
  {
    printf("%d ",j*i);
  }
  printf("\n");
  }
}
