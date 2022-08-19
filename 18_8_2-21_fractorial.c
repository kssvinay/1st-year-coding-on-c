//write a c program to find out sum of factorial values of all elements of array.
#include<stdio.h>
int main()
{
	int a,x,k[100];
	printf("enter size of array : ");
	scanf("%d",&a);
	for(int i=0;i<a;i++){
	    scanf("%d",&k[i]);
	    x = fact(k[i]);
	    printf("%d",x);
	}
}
int fact(int n){
    if(n>1)
        return n*fact(n-1);
    else if(n>=0)
        return 1;
}
