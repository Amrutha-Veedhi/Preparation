#include<stdio.h>
int NoOfBits(unsigned long long int Number){
	int Count=0;
	while(Number){
		Number=Number&(Number-1);
		Count++;
	}
	return Count;
}
int main(void){
	unsigned long long int Number;
	int Count;
	scanf("%lld",&Number);
	Count=NoOfBits(Number);
	printf("%d",Count);
	return 0;
}
