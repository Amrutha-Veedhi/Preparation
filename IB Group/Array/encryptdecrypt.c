#include<stdio.h>
#include<string.h>
char str[100],str1[100];
int ch,i,min;
Encrypt()
{	min=0;
	for(i=0;str[i]!=0;i++)
		{
			if(str[i]==' ')
				{	
					Reverse(min,(i-1));
					min=i+1;
				}
		}
	Reverse(min,i-1);
	if(ch==2) printf("%s\n",str);
	if(ch==1) AddThree();
	

}
AddThree()
{
	for(i=0;str[i]!=0;i++)
		{	if(str[i]==' ') continue;
			if(str[i]=='x' ||str[i]=='y' ||str[i]=='z' ||str[i]=='X' ||str[i]=='Y' ||str[i]=='Z')
				str[i]=(str[i]-23);
			else str[i]=str[i]+3;
		}
	printf("%s\n",str);
}
MinusThree()
{
	for(i=0;str[i]!=0;i++)
		{	if(str[i]==' ') continue;
			if(str[i]=='a' ||str[i]=='b' ||str[i]=='c' ||str[i]=='A' ||str[i]=='B' ||str[i]=='C')
				str[i]=(str[i]+23);
			else str[i]=str[i]-3;
		}
	Encrypt();
}
Reverse(int min,int max)
{
	
	int i;char c;
	if(min==max) {}
	else
	{
		for(i=min;i<max;i++)
			{
				c=str[i];
				str[i]=str[max];
				str[max]=c;
				max--;	
			}
	}
}
Decrypt()
{
	MinusThree();

}
main()
{	char k;
	scanf("%d%c",&ch,&k);
	scanf("%[^\n]s",str);
	if(ch==1)
		{
			Encrypt();
		}
	if(ch==2)
		{
			Decrypt();
		}
	return 0;
}
