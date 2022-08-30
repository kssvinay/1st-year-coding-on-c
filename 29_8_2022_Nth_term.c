/*
https://www.hackerrank.com/challenges/recursion-in-c/problem?isFullScreen=true
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int sum(int n){
    if(n==1){return 1;}
    else if(n==2){return 2;}
    else if(n==3){return 3;}
    else{
        return sum(n-1)+sum(n-2)+sum(n-3);
    }
}
int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = sum(n);
 
    printf("%d", ans); 
    return 0;
}
