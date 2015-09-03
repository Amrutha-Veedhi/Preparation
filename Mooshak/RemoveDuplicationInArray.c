#include<stdio.h>
int main(){
	int Length;
	scanf("%d",&Length);
	int i,j,Array[Length],temp,l=0,flag=1;
	for(i=0;i<Length;i++){
		flag=1;
		//printf("%d\n\n",l);
		scanf("%d",&temp);
		for(j=0;j<l;j++){
			if(temp==Array[j])
				flag=0;
		}
		if(flag==1){
			Array[l++]=temp;
		}
	}
	for(i=0;i<l;i++){
		if(i==l-1)
			printf("%d\n",Array[i]);
		else printf("%d ",Array[i]);
	}
	return 0;
}