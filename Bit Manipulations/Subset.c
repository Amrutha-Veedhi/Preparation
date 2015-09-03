#include<stdio.h>
#include<string.h>
Subsets(char String[],int LenofString){
	int i,j;
	for(i=0;i<(1<<LenofString);i++){
		for(j=0;j<LenofString;j++){
			if(i & (1<<j)){
					printf("%c",String[j]);
			}
		}printf("\n");	
	}
}
int main(void){
	char String[100];	
	scanf("%s",String);
	int LenofString=strlen(String);
	Subsets(String,LenofString);
	return 0;
}
