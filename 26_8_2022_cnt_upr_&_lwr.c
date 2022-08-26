/*
 Program to read a string and print count of uppercase characters, lowercasenumbers 
Example:
Input: Aditya@123
Output: 
Count of uppercase characters: 1
Count of lowercase characters: 5
Count of numbers : 3
*/


#include <stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char s[100];
    int upr=0,lwr=0,tot=0;
    puts("enter a string");
    gets(s);
    for(int i=0;s[i]!='\0';i++){
        if(isupper(s[i])!=0){
            upr++;
        }else{
            lwr++;
        }
        tot++;
    }
    printf("lower = %d \n upper = %d \n total = %d\n",lwr,upr,tot);
    return 0;
}
