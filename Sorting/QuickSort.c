#include<stdio.h>
void *swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
	return 0;
	}
int Patition(int q,int r,int Array[]){
	int p=q-1,x=Array[r],i;
	for(i=q;i<=r-1;i++){
		if(Array[i]<=x){
			p++;
			swap(&Array[i],&Array[p]);
		}
	}
	swap(&Array[p+1],&Array[r]);
	return p+1;
}
void Quick(int p,int r,int Array[]){
	int q;
	if(p<r){
		q=Patition(p,r,Array);
		Quick(p,q-1,Array);
		Quick(q+1,r,Array);
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
	Quick(0,Number-1,Array);
	for(i=0;i<Number;i++){
		printf("%d ",Array[i]);
	}
	printf("\n");
	return 0;
}