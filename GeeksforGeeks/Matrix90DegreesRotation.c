#include<stdio.h>
int swap(int *king,int number){

	*king=*king+number;
	number=*king-number;
	*king=*king-number;
	
	return number;
}
int main(void){
	int SizeOfMatrix,king,last,i,j;
	scanf("%d",&SizeOfMatrix);
	last=SizeOfMatrix;
	int Arr[SizeOfMatrix][SizeOfMatrix];
	for(i=0;i<SizeOfMatrix*SizeOfMatrix;i++){
		Arr[i/SizeOfMatrix][i%SizeOfMatrix]=i+1;
	}
	for(i=0;i<SizeOfMatrix*SizeOfMatrix;i++){
		printf("%d ",Arr[i/SizeOfMatrix][i%SizeOfMatrix]);
		if((i+1)%SizeOfMatrix==0) printf("\n");
	}
	printf("\n\n");
	for(i=0;i<SizeOfMatrix/2;i++){
		king=Arr[i][SizeOfMatrix-1-i];
		Arr[i][SizeOfMatrix-1-i]=Arr[i][i];
		Arr[SizeOfMatrix-1-i][SizeOfMatrix-1-i]=swap(&king,Arr[SizeOfMatrix-1-i][SizeOfMatrix-1-i]);
		Arr[SizeOfMatrix-1-i][i]=swap(&king,Arr[SizeOfMatrix-1-i][i]);
		Arr[i][i]=king;
		for(j=1;j<=last-2;j++){
			king=Arr[j][last-1];
			Arr[j][last-1]=Arr[i][j];
			Arr[last-1][last-1-j]=swap(&king,Arr[last-1][last-1-j]);
			Arr[last-1-j][i]=swap(&king,Arr[last-1-j][i]);
			Arr[i][j]=king;
		}
		last=last-2;

	}
	for(i=0;i<SizeOfMatrix*SizeOfMatrix;i++){
		printf("%d ",Arr[i/SizeOfMatrix][i%SizeOfMatrix]);
		if((	i+1)%SizeOfMatrix==0) printf("\n");
	}
	return 0;
}
