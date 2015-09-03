#include<stdio.h>
#include<string.h>
int main(void){
	char String[100],String1[100];
	scanf("%s %s",String,String1);
	strcpy(String1,strcat(String1,String1));
	int i,k=0;
	for(i=0;i<strlen(String1);i++){
		if(String1[i]==String[k])
		{
			k++;
			if((k)==(strlen(String)))
			{
				printf("Yes\n");
				return 0;
			}
			continue;
		}
		k=0;
	}
	printf("No\n");
	return 0;
}
