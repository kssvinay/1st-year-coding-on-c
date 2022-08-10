//check whether a number is a Harshad number or not
//Harshad number means if a number is perfectly divided by sum of its individual digits then it is called as Harshad number

#include <stdio.h>

int main()
{
    int n,k,s=0;
    scanf("%d",&n);
    k=n;
    while(n!=0){
        s+=n%10;
        n/=10;
    }
    if(k%s==0)
        printf("Harshad Number");
    else
        printf("Not a Harshad Number");
    return 0;
}
