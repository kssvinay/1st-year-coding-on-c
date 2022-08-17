/*write a c program to find missing from array of n consicutive numbers.
input format : 
input contains two lines; first line is for k (upto); 
second line is for list of elements seperated by spaces
example 1:
5 
1 2 4 5  
output:
3
example 2:
10
1 2 3 4 5 6 8 9 10
output:
7*/

#include<stdio.h>
int main(){
    int n;
    int arr[100];
    printf("enter n value");
    scanf("%d",&n);
    for(int i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(i+1!=arr[i]){
            printf("%d",i+1);
            break;
        }
    }

    return 0;
}
