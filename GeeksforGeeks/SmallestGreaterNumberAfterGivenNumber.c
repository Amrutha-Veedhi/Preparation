#include<stdio.h>
#include<string.h>
int i,ind=-1,j;
int FindindViolation(char String[],int StrLen){
	for(i=(StrLen-1);i>=0;i--){
		if(String[i]>String[i-1]){
			ind=i;
			break;
		}
	}
	
	return ind-1;
}
FindNumber(char String[],int ind,int StrLen){
	for(i=StrLen;i>ind;i--){
		if(String[i]>String[ind]){
			String[i]=String[i]+String[ind];
			String[ind]=String[i]-String[ind];
			String[i]=String[i]-String[ind];
			break;
		}
	}
}
Sorting(int ind,int StrLen,char String[]){
	for(i=ind;i<=StrLen;i++){
		for(j=i+1;j<=StrLen;j++){
				if(String[i]>String[j]){
					String[i]=String[i]+String[j];
					String[j]=String[i]-String[j];
					String[i]=String[i]-String[j];
				}
		}
	}
}
int main(void){
	char String[1000];
	scanf("%s",String);
	int StrLen=strlen(String);
	ind=FindindViolation(String,StrLen);
	if(ind==-1)
		{printf("Not Possible\n");return 0;}
	else{
		FindNumber(String,ind,StrLen-1);
		Sorting(ind+1,StrLen-1,String);
	}
	printf("%s\n",String);
	return 0;
}
