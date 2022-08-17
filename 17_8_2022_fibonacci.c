/*
 write a c program to generate finonacci series below 100 using arrays
output:
0 1 1 2 3 5 8 13 21 34 55 89
*/

#include<stdio.h>
int main(){
    int f = 0;
    int f1 = 1;
    int n;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    int sum = f+f1;
    if(sum>100){
        break;
    }
    printf("%d\t",sum);
    f=f1;
    f1=sum;
    
    }
    return 0;
}
