#include<stdio.h>
#include<string.h>
void FindingLocation(char NasaInputString[],int PresentX,int PresentY,char PresentD){
	int loop;
	for(loop=0;loop<strlen(NasaInputString);loop++){
		switch(NasaInputString[loop]){

			case 'L':
				PresentD=PresentD=='N' ? 'W' :PresentD=='W' ? 'S':PresentD=='S' ? 'E':PresentD=='E' ? 'N':PresentD;
				printf("%d %d %c %c\n",PresentX,PresentY,PresentD,NasaInputString[loop]);
				break;
			case 'R':
				PresentD=PresentD=='N' ? 'E':PresentD=='W' ? 'N' : PresentD=='S' ? 'W' : PresentD=='E' ? 'S': PresentD;
				printf("%d %d %c %c\n",PresentX,PresentY,PresentD,NasaInputString[loop]);
				break;
			case 'M':
				PresentY = PresentD=='S' ? --PresentY : PresentD=='N' ? ++PresentY : PresentY;
				PresentX = PresentD=='W' ? --PresentX : PresentD=='E' ? ++PresentX : PresentX;
				printf("%d %d %c %c\n",PresentX,PresentY,PresentD,NasaInputString[loop]);
				break;

		}
		
	}
	printf("%d %d %c\n",PresentX,PresentY,PresentD);
}
int main(void){
	int X,Y;
	char Direction,NasaInputString[1000];
	int No_Of_TestCases;
	scanf("%d",&No_Of_TestCases);
	while(No_Of_TestCases){
	scanf("%d %d %c",&X,&Y,&Direction);
	scanf("%s",NasaInputString);
	FindingLocation(NasaInputString,X,Y,Direction);
	No_Of_TestCases--;
	}
	return 0;
}