/*
 Program to print given string is palindrome or not without using string2 & without using string functions
Example:
Input:
madam
output:
palindrome
Example2:
Input: 
apple
Output:
not palindrome
*/


#include <stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char s[100],temp;
    int y,size=0,i;
    puts("enter a string");
    gets(s);
    for(int i=0;s[i]!='\0';i++){
        size++;
    }
    printf("size : %d\n",size);
    for(int i=0;i<size/2;i++){
        if(s[i]==s[size-i-1]){
            y=1;
        }else{
            y=0;break;
        }
    }
    if(y==0){
        puts("not Palindrome");
    }else{
        puts("Palindrome");
    }
    return 0;
}
