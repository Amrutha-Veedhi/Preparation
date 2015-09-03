#include<stdio.h>
main()
{
int k,num,c,mn=1;
scanf("%d",&num);
k=num*num*num;
c=num;
do
	{	num=num/10;
		mn=mn*10;
		}while(num!=0);
if(k%mn==c)	printf("yes\n");
else printf("no\n");
}                                                                                         
