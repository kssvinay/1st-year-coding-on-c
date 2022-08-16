
/* 
Write a c program to check each and every number of array if it is prime or not 
and display all prime numbers of array from right to left?
*/


#include <stdio.h>

int main()
{
    int arr[100],cnt,i,n;
    printf("enter size of array: ");
    scanf("%d",&n);
    for( i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int k=n-1;k>=0;k--){
        cnt=0;
        for(int j=1;j<=arr[k];j++){
            if(arr[k]%j==0){
                cnt++;
            }
        }
        if(cnt==2){
            printf("%d\t",arr[k]);
        }
    }

    return 0;
}
