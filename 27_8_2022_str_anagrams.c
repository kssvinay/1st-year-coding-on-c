/*

Read  2 string and print both are ANAGRAM or NOT ANAGRAM
Examples:
Input:
Enter two strings:
b e l o w 
b e l o w 
Output:
 anagrams
 
 */

#include<stdio.h>
#include<string.h>
void main()
{
	char s1[100],s2[100];
	int i,j,temp,n,count=0;
	printf("enter strings\n");
	gets(s1);
	gets(s2);
	n=strlen(s1);
	n=strlen(s2);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(s1[j]>s1[j+1])
			{
				temp=s1[j];
				s1[j]=s1[j+1];
				s1[j+1]=temp;
			}
		}
	}
	int flag;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(s2[j]>s2[j+1])
			{
			flag=s2[j];
			s2[j]=s2[j+1];
			s2[j+1]=flag;	
			}
		}
	}
	for(i=0;s1[i]!= '\0';i++)
	{
		if(s1[i]==s2[i])
		count++;
	}
	if(count==n)
	{
		printf("ANAGRAM");
	}
	else
	{
		printf("NOT ANAGRAM");
	}
}
