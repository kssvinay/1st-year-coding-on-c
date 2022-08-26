/*
Write  a program to count no.of words in a string //  if(str1[i]==' ') count++
Example: 
I love India
Output: no.of words= 3
*/

#include<stdio.h>
#include<string.h>
void main()
{
char str[100];
scanf("%[^\n]%*c",str);
int i=0,cnt=0;
while(str[i]!='\0')
{
  if(str[i]==' ')
  {
      cnt++;
  }
  i++;
}
cnt=cnt+1;
printf("no of words:-%d",cnt);
}
