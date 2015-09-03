#include<stdio.h>

int main(){
	int Array[100],l=0,Value,Sum=0,i,j;
	char ch='a';
	while(ch!='\n'){
		scanf("%d",&Array[l++]);
		scanf("%c",&ch);
	}
	scanf("%d",&Value);
	for(i=0;i<(1<<l);i++){
		Sum=0;
		for(j=0;j<l;j++){
			if(i&(1<<j)){
				Sum=Sum+Array[j];
			}
		}
		if(Sum==Value)
		{
			printf("[");
			for(j=0;j<l;j++){
				if(i & (1<<j))
				{
					if(j==(l-1))
						printf("%d,",Array[j]);
					else printf("%d,",Array[j]);
				}
			}
			printf("\b]\n");
		}
	}


}