/*
Write a C Program to find FACTORIAL of a number using functions with return value
Example:
Input: Enter a number :5
Output:
120
*/


#include <stdio.h>
int fact(int n){
    if(n==1){
        return 1;
    }else{
        return n*fact(n-1);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fact(n));

    return 0;
}
