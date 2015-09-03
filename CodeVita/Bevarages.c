#include<stdio.h>
int main(){
	int NoOfBevarages,QuantityOfConsuming,low,mid,high;
	scanf("%d",&NoOfBevarages);
	int Array[NoOfBevarages];
	mid = NoOfBevarages%2==0 ? (NoOfBevarages/2)+1 : ((NoOfBevarages/2));
	high=mid+1;
	low=mid-1;
	int i;
	for(i=0;i<NoOfBevarages;i++){
		scanf("%d",&Array[i]);
	}	
	scanf("%d",&QuantityOfConsuming);
	while(mid!=0 && mid!=(NoOfBevarages))
	{
		if(Array[low]+Array[mid]+Array[high]==QuantityOfConsuming){
			printf("True\n");
			return 0;
		}
		else if(Array[low]+Array[mid]+Array[high]<QuantityOfConsuming){
			high++;
		}
		else if(Array[low]+Array[mid]+Array[high]>QuantityOfConsuming){
			low--;
		}
		else {}
		if(high==(NoOfBevarages+1)){
			mid++;
			high=mid+1;
			low=mid-1;
		}
		if(low==-1){
			mid--;
			low=mid-1;
			high=mid+1;
		}
	}
	return 0;
}