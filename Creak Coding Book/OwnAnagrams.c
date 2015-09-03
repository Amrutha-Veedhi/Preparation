#include<stdio.h>
#include<string.h>
int main(void){
	char OriginalString[1000],string[1000];
	int flag=1,k=0,i=0;
	scanf("%s",OriginalString);
	strcpy(string,OriginalString);
	printf("%s\n",string);
	while(flag){
		
		for(i=0;i<strlen(string)-1;i++){
			string[i]=string[i]+string[i+1];
			string[i+1]=string[i]-string[i+1];
			string[i]=string[i]-string[i+1];
			if(strcmp(string,OriginalString)==0) {flag=0;break;}
			printf("%s\n",string);
		}

	}
	return 0;
}