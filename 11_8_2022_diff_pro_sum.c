/* k.s.s.vinay ADCKKD 11th aug assignment */

#include<stdio.h>
int subtractProductAndSum(int n){
    int p=1,s=0;
    for(int i=0;n!=0;i++){
        p*=n%10;
        s+=n%10;
        n=n/10;
    }
    return p-s;
}

int main(){
	int n,k;
	scanf("%d",&n);
	k = subtractProductAndSum(n);
	printf("%d",k);
}
