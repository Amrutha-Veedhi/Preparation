#include<stdio.h>
int i,j;
TakingInputs(int LenOfArr,int Array[]){
	for(i=0;i<LenOfArr;i++){
		scanf("%d",&Array[i]);
	}
}
int MaximumSum(int Sum1,int Sum2){
	return Sum1>Sum2?Sum1:Sum2;
}
int FindingMaximumSumPath(int Array1[],int LenOfArr1,int Array2[],int LenOfArr2){
	int Sum1=0,Sum2=0,Result=0;
	i=0;j=0;
	while(i<LenOfArr1 && j<LenOfArr2){
		
		if(Array1[i]<Array2[j]){
			Sum1+=Array1[i++];
		}
		else if(Array1[i]>Array2[j]){
			Sum2+=Array2[j++];
		}
		else{
			Result+=MaximumSum(Sum1,Sum2);
			Sum1=0;Sum2=0;
			Result+=Array1[i++];
			j++;
		}
	}
	while(i<LenOfArr1){
		Sum1+=Array1[i++];
	}
	while(j<LenOfArr2){
		Sum2+=Array1[j++];
	}
	Result+=MaximumSum(Sum1,Sum2);
	return Result;
}
int main(void){
	int LenOfArr1,LenOfArr2;
	scanf("%d %d",&LenOfArr1,&LenOfArr2);
	int Array1[LenOfArr1],Array2[LenOfArr2];
	TakingInputs(LenOfArr1,Array1);
	TakingInputs(LenOfArr2,Array2);
	printf("%d\n",FindingMaximumSumPath(Array1,LenOfArr1,Array2,LenOfArr2));
	return 0;
}
