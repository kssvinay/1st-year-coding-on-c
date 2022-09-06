/*
Read n value. Read n elements into array. print n elements without using for loop
Example:
Input:
5
1
2
3
4
5
output:
1 2 3 4 5
*/
#include<stdio.h>
void dis(int x[],int s,int e);
int main()
{
	int a[100];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int l=n-1;
	display(a,0,l);
}
void display(int x[],int s,int e)
{
	if(s>e)
	{
		return;
	}
	else
	{
		printf("%d\t",x[s]);
		display(x,s+1,e);
	}
}
