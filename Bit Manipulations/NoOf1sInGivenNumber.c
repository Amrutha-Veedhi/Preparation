#include<stdio.h>
int main(void){
	int Number,count=0;
	scanf("%d",&Number);
	while(Number){
		Number=Number&(Number-1);
		count++;
	}
	printf("%d",count);
	return 0;
}
