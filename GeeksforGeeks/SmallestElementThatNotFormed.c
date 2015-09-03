#include<stdio.h>
int FindingSmallestNumber(int Array[],int Length){
	int SmallestNumber=1,loop;
	for(loop=0;loop<Length && Array[loop]<=SmallestNumber;loop++){
		SmallestNumber=SmallestNumber+Array[loop];
	}
	return SmallestNumber;
}
int main(void){
	int Length;
	scanf("%d",&Length);
	int Array[Length],loop;
	for(loop=0;loop<Length;loop++)
		scanf("%d",&Array[loop]);
	printf("%d\n",FindingSmallestNumber(Array,Length));
}