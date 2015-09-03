#include<stdio.h>
int main(void){
	unsigned long long int Number,Dummy;
	int BitNum;
	scanf("%lld %d",&Number,&BitNum);
	Dummy=Number;
	Number=(Number^(1<<(BitNum-1)));
	if(Number&(1<<(BitNum-1))){
		printf("%lld\n",Dummy);
		return 0;
	}
	printf("%lld\n",Number);
	return 0;
}