

#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n,x,y,l=0,t,*ptr,num=0;
    scanf("%d",&n);
    t =n;
    printf("enter x and y values");
    scanf("%d%d",&x,&y);
    while(n!=0){
        l++;
        n/=10;
    }
    n=t;
    ptr = (int *)malloc(l*2);
    for(int i=0;i<l;i++){
        *(ptr+i)=n%10;
        n/=10;
        if(*(ptr+i)==x){
            *(ptr+i)=y;
        }
       // num += ((*(ptr+i))*(10**i));
        num+=*(ptr+i) * pow(10,i);
        printf("%d\t",num);
    }

    return 0;
}
