#include<stdio.h>
int main(void){
	int Number;
	scanf("%d",&Number);
	Number=((Number & 0xaaaaaaaaaaaa)>>1 | ((Number & 0x555555555)<<1));
	printf("%d\n",Number); 
	return 0;
}
