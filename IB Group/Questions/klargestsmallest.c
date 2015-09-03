#include<stdio.h>
main()
{	
	int num,val,i,j,flag=0,l=0,tem;
	scanf("%d %d",&num,&val);
	int arr[num];
	for(i=0;i<num;i++)
		{	flag=0;
			scanf("%d",&tem);
			for(j=0;j<l;j++)
				if(tem==arr[j]) {flag=1;break;}
			if(flag==0) arr[l++]=tem;
			
		}

