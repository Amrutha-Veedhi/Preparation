#include<stdio.h>
main()
{
	int arr[25],num,i,j,flag=0;
	scanf("%d",&num);
	for(i=0;i<25;i++) arr[i]=0;
	arr[0]=2;
	for(i=3;i<=num;i=i+2)
		{
		for(j=0;j<=25;j++)
			{
			if(arr[j]==0) break;
			else
				{
				if(i%arr[j]==0) {flag=0;break;}
				else 	flag=1;
				}
			}
		if(flag==1) {arr[j]=i;printf("%d\n",i);};
		}
	
			

}
