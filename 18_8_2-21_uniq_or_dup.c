/* 
Write a c program to print UNIQUE if all elements of array are different otherwise print DUPLICATE 

*/
#include<stdio.h>
int main()
{
	
	int a[]={1,2,3,6,6};
	int len=sizeof(a)/sizeof(int);
	int i,n,flag=0,j;
	for(i=0;i<len;i++)
	{
		n=a[i];
		for(j=i+1;j<len;j++)
		{
			if(n==a[j])
			{
				flag++;
				break;
			}
		}
}
		if(flag==0)
		{
			printf("UNIQUE");
		}
		else
		{
			printf("DUPLICATE");
		}
	
		
}
