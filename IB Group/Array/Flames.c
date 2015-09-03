#include<stdio.h>
#include<string.h>
int i;
Frequency(char *c,char *ch,int len,int len2)
{	int arr[123],val;
	for(i=65;i<123;i++) arr[i]=0;
	for(i=0;i<len;i++)
		{
			*(c+i)=tolower(*(c+i));
			arr[("%d",*(c+i))]++;
		}	
	for(i=0;i<len2;i++)
		{	*(ch+i)=toupper(*(ch+i));
			val=("%d",*(ch+i));
			arr[val]++;
		}
	val=0;
	for(i=97;i<123;i++) 
		{
			if(arr[i-32]>0)
				{
			arr[i]=(arr[i]-arr[i-32]);
			arr[i-32]--;
				}
			if(arr[i]<0) arr[i]=-(arr[i]);
		}
	for(i=97;i<123;i++) val=val+arr[i];

	return val;

}
Flames(int len)
{
	char str[6]="FLAMES";int l=0,prop=0;int i,flag=0;
	for(i=1;l!=5;i++)
		{
			if(i%len==0 && str[prop]!='@')
			{
				str[prop]='@';
				l++;
			}
			else if(str[prop]=='@')	
			{
				i--;
				flag=1;
			}
			prop++;
			if(prop==6) prop=0;
		}
	for(i=0;str[i]!='\0';i++)
		if(str[i]!='@') printf("%c",str[i]);
}
main()
{
	char Name1[100],Name2[100],ch;
	int len;
	gets(Name1);
	gets(Name2);
	len=Frequency(Name1,Name2,strlen(Name1),strlen(Name2));
	if(len==0) return 0;
	else Flames(len);
	return 0;
}
