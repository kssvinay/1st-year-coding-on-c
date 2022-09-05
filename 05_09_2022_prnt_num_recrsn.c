/*
1. write a program to read n and m values. Print numbers between n and m without using for loop
Example
Input :
4    10
output:
4 5 6 7 8 9 10
*/

#include <stdio.h>

void printnum(int n, int m){
    if(n<=m){
        printf("%d\t",n);
        printnum(n+1,m);
    }
}
int main()
{
    int n,m;
    printf("Enter ragne");
    scanf("%d%d",&n,&m);
    printnum(n,m);

    return 0;
}
