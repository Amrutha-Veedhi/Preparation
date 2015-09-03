#include<stdio.h>
int main(void){
	int Number;
	scanf("%d",&Number);
	int CheckBit;
	scanf("%d",&CheckBit);
	if(Number&(1<<CheckBit))
		printf("On State");
	else printf("Off state");
	return 0;
}
