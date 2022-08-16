/* 
Write a c program to check each and every number of array if it is prime or not 
and display all prime numbers of array from right to left?
*/


#include <stdio.h>

int main()
{
    int arr[100],cnt;
    for(int i=0;i<100;i++){
        scanf("%d",&arr[i]);
        cnt=0;
        for(int j=1;j<=arr[i];j++){
            if(arr[i]%j==0){
                cnt++;
            }
        }
        if(cnt==2){
            printf("%d",arr[i]);
        }
    }

    return 0;
}
