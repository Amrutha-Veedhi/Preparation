#include<stdio.h>
int main(void){
	int Number;
	scanf("%d",&Number);
	int Array[Number];
	int i,j,k,flag=0;
	for(i=0;i<Number;i++){
		scanf("%d",&Array[i]);
	}
	for(i=0;i<Number-1;i++){
		k=i;flag=0;
		for(j=i+1;j<Number;j++){
			if(Array[j]<Array[k]){
				k=j;flag=1;
			}
		}
		if(flag==0) break;
		Array[i]=Array[i]+Array[k];
		Array[k]=Array[i]-Array[k];
		Array[i]=Array[i]-Array[k];
		for(k=0;k<Number;k++){
		printf("%d ",Array[k]);
	}printf("\n");
	}
	for(i=0;i<Number;i++){
		printf("%d ",Array[i]);
	}
	printf("\n");
	return 0;
}