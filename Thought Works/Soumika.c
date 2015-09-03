#include<stdio.h>
#include<string.h>
int main(void){
	char InputString[10000];
	scanf("%s",InputString);
	int loop,EvenCount=0,Count=0;
	for(loop=0;loop<strlen(InputString);loop++){
		if((InputString[loop]%2)%2==0 && InputString[loop]!='0'){
			EvenCount++;
		}
	}
	for(loop=0;loop<strlen(InputString);loop++){
		printf("%d ",EvenCount-Count);
		if((InputString[loop]%2)%2==0 && InputString[loop]!='0')
			Count++;
	}
	printf("\b\n");
}
