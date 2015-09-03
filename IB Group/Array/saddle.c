#include<stdio.h>
/*int row_max(int a[][],int r_num,int col,int number)
{
	int i;
	for(i=0;i<col;i++)
		{
			if (number<a[r_num][i])
				return 0;
			}
	return 1;
	}
int col_min(int a[][],int c_num,int row,int number)
{
	int i;
	for(i=0;i<row;i++)
		{
			if (number>a[i][c_num])
				return 0;
			}
	return 1;
	}
*/
int main(void)
{	
	int r,c,i,j,flag1,flag2,k,count=0;
	scanf("%d %d",&r,&c);
	int arr[r][c];
	for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)	
			scanf("%d",&arr[i][j]);
			}
	for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
				{	flag1=1,flag2=1;
					for(k=0;k<c;k++)
						{
						if (arr[i][j]<arr[i][k])
							{flag1=0;
							break;}
						}
					for(k=0;k<r;k++)
						{	
						if (arr[i][j]>arr[k][j])
							{flag2=0;
							break;}
						}
				if ((flag1==1) && (flag2==1)){count++;printf("(%d,%d)\n",i,j);}
				}
			}
	if (count==0)printf("No saddle points\n");
	return 0;
	}
