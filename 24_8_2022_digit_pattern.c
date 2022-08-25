/*
Write a C program to read “n” value and display following pattern

Test Case: 1
Input : 
Enter n value:6
Output : 
 6
 6 5
 6 5 4
 6 5 4 3
 6 5 4 3 2
 6 5 4 3 2 1
 */

#include<stdio.h>
void main()
{
 int i,j,n;
 scanf("%d",&n);
 printf("pattern is :\n");
 for(i=n;i>=1;i--)
 {
  for(j=n;j>=i;j--)
  {
    printf("%d",j);
  }
  printf("\n");
  }
}
