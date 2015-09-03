#include<stdio.h>
int main(void){
	int Number,MisCon,Con,i,EvenCon,OddCon;
	scanf("%d",&Number);
	int Array[Number];
	for(i=0;i<Number;i++){
		scanf("%d",&Array[i]);
	}
	if(Number==1){
		printf("%d",Array[0]);
		return 0;
	}
	MisCon=0;
	EvenCon=0;
	OddCon=0;
	for(i=0;i<Number;i++){
		if(i%2==0){
			EvenCon=EvenCon^Array[i];
		}
		else OddCon=OddCon^Array[i];
		MisCon=MisCon^Array[i];
	}
	Con=~(Array[0]^Array[1]);
	for(i=2;i<Number;i++){
		Con=~(Con^Array[i]);
	}
	if(MisCon==0 && Con==-1){
		printf("NO PROBLEM");
	}
	else if(MisCon==Con && Number%2==1 && (EvenCon!=OddCon) && MisCon && (EvenCon==0 || OddCon==0)){
			printf("%d",MisCon);
	}
	else printf("INVALID INPUT");
	return 0;
}
