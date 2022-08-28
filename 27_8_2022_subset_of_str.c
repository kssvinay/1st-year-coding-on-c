/*
Write a program to read a string and print all subsets of string
Input:
abcd

output:
a
b
c
d
ab
bc
cd
abc
bcd
abcd
*/
#include <stdio.h> 
#include <string.h> 
 void main()

	 { 
     char s[100];
     puts("enter string");
     gets(s);
     int  i, j, k;
     int n=strlen(s);
     for (i = 0; i < n; i++)
	 { 
        for (j = 0; j < n-i; j++)
		{
			int x=j+i+1; 
            for (k = j; k <x; k++)
			{ 
                printf("%3c", s[k]); 
            } 
            printf("\n"); 
        } 
     }
 }
