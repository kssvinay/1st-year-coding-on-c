/*
Read n value. Read n elements into array. print n elements without using for loop
Example:
Input:
5
1
2
3
4
5
output:
1 2 3 4 5
*/

#include<stdio.h>

void readdet(int *p,int *q,int n){
    if(*q<n){
        scanf("%d",*p+*q);
        *q++;
        readdet(p,q,n);
    }else{
        return 0;
    }
}
void printdet(int *p,int *q,int n){
    if(*q<n){
        printf("%d",*p+*q);
        *q++;
        printdet(p,q,n);
    }else{
        return 0;
    }
}
int main(){
    int n,arr[50],i=0;
    scanf("%d",&n);
    printf("Enter values");
    readdet(&arr,&i,n);
    i=0;
    printdet(&arr,&i,n);
    
    return 0;
}
