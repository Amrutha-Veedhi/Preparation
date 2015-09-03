#include<stdio.h>
void Merge(int Array[],int low,int mid ,int high){
	int i=low,j=mid+1,k=low,l;
	int temp[high+1];
	while(i<=mid && j<=high){
		if(Array[i]<=Array[j])
			temp[k++]=Array[i++];
		else temp[k++]=Array[j++];
	}
	if(i>mid)
		for(l=j;l<=high;l++)
			temp[k++]=Array[l];
	else
		for(l=i;l<=mid;l++)
			temp[k++]=Array[l];
	for(l=low;l<=high;l++)
		Array[l]=temp[l];
}
void Divide(int Array[],int low, int high){
	int mid;
	if(low<high){
		mid=(low+high)/2;
		Divide(Array,low,mid);
		Divide(Array,mid+1,high);
		Merge(Array,low,mid,high);
	}
}

int main()
{
	int Number;
	scanf("%d",&Number);
	int i,Array[Number];
	for(i=0;i<Number;i++){
		scanf("%d",&Array[i]);
	}
	Divide(Array,0,Number-1);
	for(i=0;i<Number;i++){
		printf("%d ",Array[i]);
	}
	printf("\n");
	return 0;
}
