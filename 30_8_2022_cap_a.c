/*
Read a string and print all character "a" to uppercase and print string. 
If character "a" is not there in string. Print String 
Example:
Input: aditya
Output: AdityA
*/


#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char s[100];
    gets(s);
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='a'){
            printf("%c",toupper(s[i]));
        }else{
            printf("%c",s[i]);
        }
    }

    return 0;
}
