#include<stdio.h>
main()
{
int k,num,c=0;
scanf("%d",&num);
do{
	num=num/10;
	c++;
	}while(num!=0);
printf("%d\n",c);
}                                                                                         
