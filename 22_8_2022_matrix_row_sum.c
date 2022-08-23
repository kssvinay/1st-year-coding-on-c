#include<stdio.h>
void main()
{
	int a[100][100];
	int i,j,r,c,sum;
	
	printf("Enter rows \n");
	scanf("%d",&r);
	printf("Enter cols \n");
	scanf("%d",&c);
	printf("Enter elements \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<r;i++)
	{
		sum=0;
		for(j=0;j<c;j++)
		{
			sum=sum+a[i][j]	;
		}
		printf("Row %d sum is %d \n",i+1,sum);		
	}
	
}
