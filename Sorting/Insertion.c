#include<stdio.h>
int main(){
	int Number;
	scanf("%d",&Number);
	int Array[Number];
	int i,j,k;
	for(i=0;i<Number;i++){
		scanf("%d",&Array[i]);
	}
	for(i=2;i<Number;i++){
		k=Array[i];
		j=i;
		while(Array[j-1]>k && j>=1){
			Array[j]=Array[j-1];
			j--;
		}
		Array[j]=k;
	}
	for(i=0;i<Number;i++){
		printf("%d ",Array[i]);
	}
	printf("\n");
	return 0;
}