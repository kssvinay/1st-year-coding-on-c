/* k.s.s.vinay */
/* You have n coins and you want to build a staircase with these coins.
The staircase consists of k rows where the ith row has exactly i coins. The last row of the staircase may be incomplete. */

#include <stdio.h>


int arrangeCoins(int n){
    int k=0;
    for(int i=1;;i++){
        k+=i;
        if(n<k){
            return i-1;
        }
    }
}
int main()
{
    int n,a;
    printf("enter");
    scanf("%d",&n);
    a = arrangeCoins(n);
    printf(":::: %d ::::",a);
    return 0;
}
