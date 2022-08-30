/*
https://www.hackerrank.com/challenges/frequency-of-digits-1/problem?isFullScreen=true
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char c[1000];
    int a[128]={0};
    scanf("%s",c);
    for(int i=0;i<strlen(c);i++){
            //printf("%c\t%c\n",c[i],c[j]);
            int x = c[i]-'0';
            //printf("%c\t%d\t%d\n",c[i]-'0',c[i]-'0',++a[c[i]-'0']);
            a[x]++;
    }
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
