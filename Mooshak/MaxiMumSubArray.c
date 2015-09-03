#include<stdio.h>
int main(void){
	int LenOfArray,i;
	scanf("%d",&LenOfArray);
	int Array[LenOfArray];
	for(i=0;i<LenOfArray;i++){
		scanf("%d",&Array[i]);
	}
	int MaxSum=-2000,Sum=0,j;
	for(i=0;i<LenOfArray;i++){
		Sum=0;
		for(j=i;j<LenOfArray;j++){
			Sum=Sum+Array[j];
			
			if(Sum>MaxSum)
			{
				MaxSum=Sum;
			}
		}
	}
	printf("%d",MaxSum);
	return 0;
}
