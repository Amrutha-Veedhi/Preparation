#include<stdio.h>
int main(){
	int Number,Number1,count=0;
	scanf("%d %d",&Number,&Number1);
	Number=(Number^Number1);
	while(Number){
		Number=(Number&Number-1);
		count++;
	}
	printf("%d\n",count);
	return 0;
}