#include<stdio.h>
#include<string.h>
void main(void)
{
	int num;
	char String[120];
	scanf("%d",&num);
	do
		{
			scanf("%s",String);
			if(num<=0 || num>=11) 
				{
					printf("Invalid Test\n");
					return ;
				}
			if(strlen(String)<1 || strlen(String)>100)
				{
					printf("Invalid Input\n");
					continue;
				}
			MarutString(String);
			
		}while(--num);
}
void MarutString(char String[])
{
	int j,UpperCount=0,LowerCount=0;
	for(j=0;j<strlen(String);j++)
		{
			if(isupper(String[j])) 
				UpperCount++;
			if(islower(String[j]))
				LowerCount++;
		}
	if(UpperCount<=LowerCount &&(LowerCount) )
		printf("%d\n",UpperCount);
	else if(LowerCount<UpperCount &&(UpperCount) )
		printf("%d\n",LowerCount);
	else printf("Invalid Input\n");
}
