#include<stdio.h>
#include<string.h>
main()
{
	int arr[123],i,l=0;char str[100];
	scanf("%[^\n]s",str);
	for(i=65;i<123;i++) arr[i]=0;
	for(i=0;str[i]!=0;i++)
		{	
			str[i]=tolower(str[i]);
			arr[("%d",str[i])]++;
		}
	l=0;int flag=0;
	for(i=97;i<123;i++)
		{	
			if(l==(strlen(str)-1)) {flag=1;break;}
			if(arr[i]!=0)
			{	l++;
				printf("%c - %d\n",i,arr[i]);
			}
		}
	if(flag==1) printf("%c - %d\n",i,arr[i]);
	return 0;		
}
