/*Chef decides to solve at least 1010 problems every week for 44 weeks.
Given the number of problems he actually solved in each week over 44 weeks as P_1, P_2, P_3,P_4
 , output the number of weeks in which Chef met his target.*/

#include <stdio.h>

int main(void) {
    int arr[4],cnt=0;
    for(int i=0;i<4;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>=10){
            cnt++;
        }
    }
    printf("%d",cnt);
    
	// your code goes here
	return 0;
}

