/*Write a program to generate following pattern: taking n=5
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*
*/

#include<stdio.h>
int main(){
    int n,i,j;
    char c = 'A';
    printf("enter n value");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }for(i=n-1;i>0;i--){
        for(j=i;j>0;j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;

}
