#include<stdio.h>
void swap(int Array[],int i, int j){

	Array[i]=Array[i]+Array[j];
	Array[j]=Array[i]-Array[j];
	Array[i]=Array[i]-Array[j];	
}
int main(void){
	int Number,i,j;
	scanf("%d",&Number);
	int Array[Number];
	for(i=0;i<Number;i++){
		scanf("%d",&Array[i]);
	}
	for(i=0;i<Number;i++){
		if(i%2==0 && Array[i]>0){
			for(j=i+1;j<Number;j++){
				if(Array[j]>0){
					swap(Array,i,j);
				}
				if(Array[j]<0){
					swap(Array,i,j);
					break;
				}
			}
		}
			if(i%2==1 && Array[i]<0){
			for(j=i+1;j<Number;j++){
				if(Array[j]<0){
					swap(Array,i,j);
				}
				if(Array[j]>0){
					swap(Array,i,j);
					break;
				}
			}
		}
	}
	for(i=0;i<Number;i++){
		if(i==Number-1)
			printf("%d\n",Array[i]);
		else printf("%d ",Array[i]);
	}
	return 0;
}