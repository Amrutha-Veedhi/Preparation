#include<stdio.h>

FindMinLengthOfArray(int Array[],int NoOfInputs,int GivenNumber){
	int i,j,MinLength=NoOfInputs,Sum;
	for(i=0;i<NoOfInputs;i++){
		Sum=0;
		for(j=i;j<NoOfInputs;j++){
			Sum=Sum+Array[j];
			if(Sum>GivenNumber){
				break;
			}
		}
		if(Sum<GivenNumber) continue;
		if(MinLength>((j-i)+1)){
			MinLength=(j-i)+1;
		}
	}
	return MinLength;
}
int main(void){
	int NoOfInputs;
	scanf("%d",&NoOfInputs);
	int Array[NoOfInputs],i,GivenNumber;
	scanf("%d",&GivenNumber);
	for(i=0;i<NoOfInputs;i++){
		scanf("%d",&Array[i]);
	}
	printf("%d\n",FindMinLengthOfArray(Array,NoOfInputs,GivenNumber));
	return 0;
}
