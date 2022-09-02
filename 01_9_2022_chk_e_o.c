/*
Write a C Program to check a number is even or odd using functions with return value     
Example:
Input: Enter a number :6
Output:
Even
*/


#include <stdio.h>
char *checkeo(int n){
    if(n%2==0){
        return "Even";
    }else{
        return "Odd";
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%s",checkeo(n));

    return 0;
}
