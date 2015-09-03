#include<stdio.h>
int main(void){
	unsigned long long int i,Number,a=1,b=0,c;
	scanf("%lld",&Number);
	//printf("%d %d ",b,a);
	for(i=0;i<Number-2;i++){
		c=a+b;
		b=a;
		a=c;
	}
	printf("%lld\n",a);
	return 0;
}
