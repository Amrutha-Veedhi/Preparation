#include<stdio.h>
#include<string.h>
main()
{
	char str[6]="FLAMES";int l=0,prop=0;int len,i;
	scanf("%d",&len);
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
				
			}
			prop++;
			if(prop==6) prop=0;
		}
	for(i=0;str[i]!='\0';i++)
		if(str[i]!='@') printf("%c\n",str[i]);

}

