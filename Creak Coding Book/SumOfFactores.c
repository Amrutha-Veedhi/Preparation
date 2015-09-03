#include<stdio.h>
#include<math.h>
int power(int i,int j){
	int k,sum=1;
	for(k=0;k<j;k++){
		sum=sum*i;
	}
	return sum;
}
int main(void){
	unsigned long long int j,Number,i,m=0;
	unsigned long long int Array[500][2];
	int l=1,flag=0,mn=10,k=2;
	Array[0][0]=2;
	Array[0][1]=0;
	//scanf("%d",&Number);
	for(i=3;i<3000;i++){
		flag=0;
		for(j=0;j<l;j++){
			if((i%Array[j][0])==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			Array[l][1]=0;
			Array[l++][0]=i;
		}
	}
	l=0;
	scanf("%lld",&Number);
	while(Number!=1){
		
		if(Number%Array[l][0]==0){
			
			Array[l][1]++;
			Number=Number/Array[l][0];
		}
		else l++;
		printf("%lld %lld\n",Array[l][0],Array[l][1]);
	}
	printf("\n");
	unsigned long long int Sum=1;
	for(i=0;i<=l;i++){
		if(Array[i][1]!=0)
		{
			j=Array[i][0];
			m=Array[i][1]+1;
			m=power(j,m);
			Sum=Sum*((m-1)/(j-1));
		}
	}
	printf("%lld\n",Sum);
	return 0;
}	