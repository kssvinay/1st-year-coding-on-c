/*1:Write a C  program to read “n” value and print following pattern:
Input: 
Enter n value:5
Output:                                     
Aa
Bb      Cc
Dd      Ee      Ff
Gg      Hh      Ii      Jj
Kk      Ll      Mm      Nn      Oo
*/
#include<stdio.h>
int main(){
    int n,i,j;
    char c = 'A';
    printf("enter n value");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%3c%c",c,c+32);
            c++;
        }
        printf("\n");
    }
    return 0;
}
