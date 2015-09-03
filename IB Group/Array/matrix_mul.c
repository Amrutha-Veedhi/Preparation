#include<stdio.h>
int main(void)
{
	int r1,r,c1,c,i,j,k,sum;
	scanf("%d %d",&r,&c);
	int arr[r][c];
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&arr[i][j]);
	scanf("%d %d",&r1,&c1);
	int arr2[r1][c1],arr3[r][c1];
	for(i=0;i<r1;i++)
		{
		for(j=0;j<c1;j++)
			scanf("%d",&arr2[i][j]);
			}
	if(c==r1)
		{
		for(i=0;i<r;i++)
			{	
				for(j=0;j<c1;j++)
					{sum=0;
						for(k=0;k<c;k++)
							{sum=sum+(arr[i][k]*arr2[k][j]);}
						arr3[i][j]=sum;
						}
				}
		for(i=0;i<r;i++)
			{
			for(j=0;j<c1;j++)
				{if(j==c1-1)printf("%d",arr3[i][j]);
					else printf("%d ",arr3[i][j]);}
				printf("\n");
			}
		printf("\n");
		for(i=0;i<c1;i++)
			{
			for(j=0;j<r;j++)
					{if(j==r-1)printf("%d",arr3[j][i]);
					else printf("%d ",arr3[j][i]);}
				printf("\n");
				}
		}
	return 0;
	}
