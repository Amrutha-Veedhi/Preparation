#include<stdio.h>
int main(void){
	int TestCases,QuantityRequired,NoOfBottleRequied=0;
	scanf("%d",&TestCases);
	while(TestCases){
		NoOfBottleRequied=0;
		scanf("%d",&QuantityRequired);
		if(QuantityRequired>=10){
				NoOfBottleRequied=NoOfBottleRequied+(QuantityRequired/10);
				QuantityRequired=QuantityRequired%10;
		}
		if(QuantityRequired>=7){
			NoOfBottleRequied=NoOfBottleRequied+(QuantityRequired/7);
				QuantityRequired=QuantityRequired%7;
		}
		if(QuantityRequired>=5){
			NoOfBottleRequied=NoOfBottleRequied+(QuantityRequired/5);
				QuantityRequired=QuantityRequired%5;
		}
		NoOfBottleRequied=NoOfBottleRequied+QuantityRequired;
		printf("%d\n",NoOfBottleRequied);
		TestCases--;
	}
	return 0;
}
