/*Write a program to generate following pattern: taking n=5
A
B  C
D  E  F
G  H  I   J
K  L  M N O*/

#include<stdio.h>
int main(){
    int n,i,j;
    char c = 'A';
    printf("enter n value");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%3c",c);
            c++;
        }
        printf("\n");
    }
    return 0;

}
