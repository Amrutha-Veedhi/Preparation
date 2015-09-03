#include<stdio.h>
main()
{
	int r1,c1,r2,c2,i,j,k,val=0;
	scanf("%d%d",&r1,&c1);
	int arr[r1][c1];
	for(i=0;i<r1;i++)
		for(j=0;j<c1;j++) scanf("%d",&arr[i][j]);
	scanf("%d%d",&r2,&c2);
	int arr1[r2][c2];
	for(i=0;i<r2;i++)
		for(j=0;j<c2;j++) scanf("%d",&arr1[i][j]);
	int arr2[r1][c2];
	if(c1==r2)
		{
		for(i=0;i<r1;i++)
			for(j=0;j<c2;j++)
				{	val=0;
					for(k=0;k<c1;k++)
						{val=val+(arr[i][k]*arr1[k][j]);}
					arr2[i][j]=val;
				}
		for(i=0;i<r1;i++)
			{
			for(j=0;j<c2;j++)
				{if(j==c2-1)printf("%d",arr2[i][j]);
					else printf("%d ",arr2[i][j]);}
				printf("\n");
			}
		printf("\n");
		for(i=0;i<c2;i++)
			{
			for(j=0;j<r1;j++)
					{if(j==r1-1)printf("%d",arr2[j][i]);
					else printf("%d ",arr2[j][i]);}
				printf("\n");
				}
		}
	return 0;

}
