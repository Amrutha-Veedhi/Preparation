#include<stdio.h>
main()
{
	int r1,c1,i,j,k,flag1=0,flag2=0,flag=0;
	scanf("%d %d",&r1,&c1);
	int arr[r1][c1];
	for(i=0;i<r1;i++)
		for(j=0;j<c1;j++) scanf("%d",&arr[i][j]);
	for(i=0;i<r1;i++)
		for(j=0;j<c1;j++)
			{	flag1=0;flag2=0;
				for(k=0;k<c1;k++) if(arr[i][j]<arr[i][k]) {flag1=1;break;}
				for(k=0;k<r1;k++) if(arr[i][j]>arr[k][j]) {flag2=1;break;}
				if(flag1==0 && flag2==0) { flag=1;printf("(%d,%d)\n",i,j);}
			}
	if(flag!=1) printf("No saddle points");
	return 0; 
}
