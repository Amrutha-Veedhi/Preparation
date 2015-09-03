#include<stdio.h>
void Printf(int Array[],int LenOfArray){
	int i;
	for(i=0;i<LenOfArray;i++){
		if(i+1==LenOfArray)
			printf("%d\n",Array[i]);
		else
			printf("%d ",Array[i]);
	}
}
int main(void){
	int LenOfArray,i;
	scanf("%d",&LenOfArray);
	int Array[LenOfArray],min;
	for(i=0;i<LenOfArray;i++){
		scanf("%d",&Array[i]);
	}
	if(LenOfArray==1){
		printf("%d\n",Array[0]);
		return 0;
	}
	min=Array[LenOfArray-1];
	for(i=LenOfArray-2;i>=0;i--){
		if(min<Array[i] && i==0){
			Array[i+1]=Array[i];
			Printf(Array,LenOfArray);
			Array[i+1]=Array[i];    		/// There Is A Chance Of Printing Chech Condtions
			Array[i]=min;
			Printf(Array,LenOfArray);
		}
		else if(min<Array[i] && i!=0){
			Array[i+1]=Array[i];
			Printf(Array,LenOfArray);
		}
		else {
			Array[i+1]=min;
			Printf(Array,LenOfArray);
			break;
		}
	}


	return 0;
}
