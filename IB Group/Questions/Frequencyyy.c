#include<stdio.h>
#include<string.h>
int i;
Frequency(char *c,char *ch,int len,int len2)
{	int arr[123],val;
	for(i=65;i<123;i++) arr[i]=0;
	for(i=0;i<len;i++)
		{
			*(c+i)=tolower(*(c+i));
			val=("%c",*(c+i));
			arr[val]++;
		}	
	for(i=0;i<len2;i++)
		{	
			*(ch+i)=toupper(*(ch+i));
			val=("%c",*(ch+i));
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
main()
{
	char Name1[100],Name2[100],ch;
	int len;
	gets(Name1);
	gets(Name2);
	len=Frequency(Name1,Name2,strlen(Name1),strlen(Name2));
	printf("%d\n",len);
}
