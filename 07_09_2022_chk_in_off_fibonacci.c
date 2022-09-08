/*
Read a number n. if the number is in fibonacci series print "Yes" otherwise "No"
Example:
Input:
5
Output:
Yes
Explanation: if you take fibonacci series 0 0 1 1 2 3 5. Because 5 is there is fibonacci series , it prints Yes
Example 2:
Input:
4
Output:
No
Explanation:if you take fibonacci series 0 0 1 1 2 3 5. Because 4 is there is not present in fibonacci series , it prints No.
*/

#include<stdio.h>
int main(){
    int f0=0,f1=1,f2,n;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=0;f2<=n;i++){
        f2=f1+f0;
        if(n==f2){
            printf("YES");
            return 0;
        }
        f0=f1;
        f1=f2;
    }
    printf("NO");
    return 0;
}
