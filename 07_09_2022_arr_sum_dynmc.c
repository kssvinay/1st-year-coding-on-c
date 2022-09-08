/*Read n value. Read "n" numbers dynamically using pointers. Print sum of n numbers.
Example1:
Input:
3
1 4 6
Output:
11
Example2:
Input:
4
1 1 2 3
Output:
7*/

#include <stdio.h>
#include<stdlib.h>

int main()
{
    int n,*ptr,x=0;
    printf("enter n value");
    scanf("%d",&n);
    ptr = (int *)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d",(ptr+i));
        x+=*(ptr+i);
    }
    printf("total is %d",x);
    

    return 0;
}
