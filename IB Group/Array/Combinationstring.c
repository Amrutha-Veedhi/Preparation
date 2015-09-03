#include<stdio.h>
#include<string.h>
char Strings[100][100];
NoOfCombinations(int len)
{
	int i=0,sum=1;
	for(i=1;i<=len;i++) sum=sum*2;
	return sum-1;
		
}
CombinationStrings(char str[],int val,int len)
{
	int i,arr[len],j,num,l=0,temp=0;
	char dummy[10];
	for(i=1;i<=val;i++)
		{	num=i;l=0;
			for(j=0;j<len;j++)
				{	
					if(num%2==1) {dummy[l++]=str[j];}
					num=num/2;
				}dummy[l]='\0';
			strcpy(Strings[temp++],dummy);
		}
	return temp-1;
}
Printing(int len)
{	int i;
	for(i=0;i<len;i++)
		if(strcmp(Strings[i],"@@")!=0)printf("%s\n",Strings[i]);
	printf("%s",Strings[i]);
}
Finalize(int len)
{
	int i,j;char dummy[100];
	for(i=0;i<=len;i++)
		{
			for(j=i+1;j<=len;j++)
				{
					if(strcmp(Strings[i],Strings[j])==0) strcpy(Strings[j],"@@");
					else if(strcmp(Strings[i],Strings[j])>0) 
						{
							strcpy(dummy,Strings[i]);
							strcpy(Strings[i],Strings[j]);
							strcpy(Strings[j],dummy);
						}
				}
		}
}
main()
{
	char str[100];int val=0,num;
	scanf("%s",str);
	val=NoOfCombinations(strlen(str));
	num=CombinationStrings(str,val,strlen(str));
	Finalize(num);
	Printing(num);
	return 0;
}
