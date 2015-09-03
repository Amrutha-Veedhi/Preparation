#include<stdio.h>
int main(){
	int LenOfArray,i;
	scanf("%d",&LenOfArray);
	int Array[LenOfArray];
	for(i=0;i<LenOfArray;i++){
		scanf("%d",&Array[i]);
	}

	for(i=0;i<LenOfArray-3;i++){
		if(Array[i]==(Array[i+1]+Array[i+2]+Array[i+3]))
			printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}